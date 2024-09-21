# Import necessary modules
import time  # To introduce a delay between data insertions (sleep function)
from argparse import ArgumentParser  # To handle command-line arguments

import pandas as pd  # To handle data manipulation in DataFrame format
import psycopg2  # To interact with the PostgreSQL database
from sklearn.datasets import load_iris  # To load the Iris dataset from sklearn

# Function to load and preprocess the Iris dataset
def get_data():
    # Load the Iris dataset as a DataFrame with both features (X) and target (y)
    X, y = load_iris(return_X_y=True, as_frame=True)
    # Concatenate feature columns (X) and target column (y) into one DataFrame
    df = pd.concat([X, y], axis="columns")
    # Rename columns for easier handling (replace spaces and parentheses)
    rename_rule = {
        "sepal length (cm)": "sepal_length",
        "sepal width (cm)": "sepal_width",
        "petal length (cm)": "petal_length",
        "petal width (cm)": "petal_width",
    }
    # Apply the renaming rule
    df = df.rename(columns=rename_rule)
    return df  # Return the processed DataFrame

# Function to send an SQL query to the database
def send_query(db_connect, query: str):
    # Open a cursor using the database connection, which allows executing SQL commands
    with db_connect.cursor() as cur:
        # Execute the provided SQL query
        cur.execute(query)
        # Commit the transaction to apply any changes to the database (important for insertions, updates, deletions)
        db_connect.commit()

# Function to create the 'iris_data' table if it doesn't already exist
def create_table(db_connect):
    # SQL query to create a table with columns for timestamp, feature data, and target
    create_table_query = """
    CREATE TABLE IF NOT EXISTS iris_data (
        id SERIAL PRIMARY KEY,
        timestamp timestamp,
        sepal_length float8,
        sepal_width float8,
        petal_length float8,
        petal_width float8,
        target int
    );"""
    # Print the query for debugging
    print(create_table_query)
    # Execute the SQL query using the database connection
    send_query(db_connect, create_table_query)

# Function to insert one row of data into the database
def insert_data(db_connect, data):
    # SQL query to insert data into the 'iris_data' table with the current timestamp
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
    # Execute the SQL query using the database connection
    send_query(db_connect, insert_row_query)

# Function to generate data and insert it into the database continuously
def generate_data(db_connect, df):
    while True:  # Infinite loop to insert rows repeatedly
        # Sample a random row from the DataFrame, convert it to a Series, and insert into the DB
        insert_data(db_connect, df.sample(1).squeeze())
        # Wait for 1 second before inserting the next row (simulating real-time data insertion)
        time.sleep(1)

# Main entry point for the script
if __name__ == "__main__":
    # Create a parser for command-line arguments
    parser = ArgumentParser()
    # Define an argument to specify the database host (default is 'localhost')
    parser.add_argument("--db-host", dest="db_host", type=str, default="localhost")
    # Parse the command-line arguments
    args = parser.parse_args()

    # Establish a connection to the PostgreSQL database using command-line args
    db_connect = psycopg2.connect(
        user="myuser",         # Username for the database
        password="mypassword", # Password for the database
        host=args.db_host,     # Host address (from the command-line argument)
        port=5432,             # Port number for PostgreSQL (default is 5432)
        database="mydatabase", # The name of the database to connect to
    )
    
    # Create the 'iris_data' table if it does not exist
    create_table(db_connect)
    
    # Load the Iris dataset and prepare it for insertion
    df = get_data()
    
    # Start generating and inserting data into the database
    generate_data(db_connect, df)
