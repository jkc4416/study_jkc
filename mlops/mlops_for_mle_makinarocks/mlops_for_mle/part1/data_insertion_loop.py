# Import necessary modules
import time  # To introduce delay in a loop (sleep function)
import pandas as pd  # To manipulate and handle data in DataFrame format
import psycopg2  # To interact with PostgreSQL database
from sklearn.datasets import load_iris  # To load the built-in Iris dataset from sklearn

# Function to load and preprocess Iris dataset
def get_data():
    # Load the Iris dataset as a DataFrame, with both features (X) and target (y)
    X, y = load_iris(return_X_y=True, as_frame=True)
    # Combine the feature columns (X) and the target column (y) into one DataFrame
    df = pd.concat([X, y], axis="columns")
    # Dictionary to rename columns with more convenient names (remove spaces and parentheses)
    rename_rule = {
        "sepal length (cm)": "sepal_length",
        "sepal width (cm)": "sepal_width",
        "petal length (cm)": "petal_length",
        "petal width (cm)": "petal_width",
    }
    # Apply renaming to DataFrame
    df = df.rename(columns=rename_rule)
    return df  # Return the processed DataFrame

# Function to insert a row of data into the database
def insert_data(db_connect, data):
    # SQL query to insert data into the 'iris_data' table
    # The NOW() function captures the current timestamp for each row
    insert_row_query = f"""
    INSERT INTO iris_data
        (timestamp, sepal_length, sepal_width, petal_length, petal_width, target)
        VALUES (
            NOW(),
            {data.sepal_length},
            {data.sepal_width},
            {data.petal_length},
            {data.petal_width},
            {data.target}
        );
    """
    # Print the query for debugging purposes
    print(insert_row_query)
    # Use the database connection to create a cursor for executing the query
    with db_connect.cursor() as cur:
        # Execute the SQL query to insert the data
        cur.execute(insert_row_query)
        # Commit the changes to the database
        db_connect.commit()

# Function to generate data and continuously insert it into the database
def generate_data(db_connect, df):
    while True:  # Infinite loop to continuously insert data
        # Sample one random row from the DataFrame, convert to a Series, and insert into DB
        insert_data(db_connect, df.sample(1).squeeze())
        # Wait for 1 second before the next iteration to simulate real-time data insertion
        time.sleep(1)

# Main function to initiate database connection and data generation
if __name__ == "__main__":
    # Establish connection to the PostgreSQL database with user credentials
    db_connect = psycopg2.connect(
        user="myuser",       # Username for database
        password="mypassword", # Password for the database
        host="localhost",    # Host where the database is running (localhost for local machine)
        port=5432,           # Port number for PostgreSQL (default is 5432)
        database="mydatabase", # The name of the database to connect to
    )
    # Load and prepare the Iris dataset
    df = get_data()
    # Start generating data and inserting it into the database
    generate_data(db_connect, df)
