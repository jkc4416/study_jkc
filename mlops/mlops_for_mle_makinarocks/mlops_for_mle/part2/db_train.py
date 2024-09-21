# Import necessary modules
import joblib  # For saving and loading models
import pandas as pd  # For handling and manipulating data in DataFrame format
import psycopg2  # For connecting to PostgreSQL database
from sklearn.metrics import accuracy_score  # To calculate accuracy of the model
from sklearn.model_selection import train_test_split  # To split the dataset into training and validation sets
from sklearn.pipeline import Pipeline  # To create a pipeline of sequential processing steps
from sklearn.preprocessing import StandardScaler  # For scaling features
from sklearn.svm import SVC  # Support Vector Classifier (SVM algorithm)

# 1. Get data
# Establish a connection to the PostgreSQL database
db_connect = psycopg2.connect(
    user="myuser",         # Username for the database
    password="mypassword", # Password for the database
    host="localhost",      # Host where the database is running (localhost for local machine)
    port=5432,             # Port number for PostgreSQL (default is 5432)
    database="mydatabase", # The name of the database to connect to
)

# Query the database to retrieve the last 100 rows from the 'iris_data' table and load them into a DataFrame
df = pd.read_sql("SELECT * FROM iris_data ORDER BY id DESC LIMIT 100", db_connect)

# Prepare the feature matrix X by dropping columns 'id', 'timestamp', and 'target' from the DataFrame
X = df.drop(["id", "timestamp", "target"], axis="columns")
# Extract the target column (y) from the DataFrame
y = df["target"]

# Split the data into training (80%) and validation (20%) sets, using a fixed random state for reproducibility
X_train, X_valid, y_train, y_valid = train_test_split(X, y, train_size=0.8, random_state=2022)

# 2. Model development and training
# Create a pipeline that first scales the features, then applies an SVM classifier
model_pipeline = Pipeline([("scaler", StandardScaler()), ("svc", SVC())])

# Train the pipeline on the training data
model_pipeline.fit(X_train, y_train)

# Make predictions on the training data
train_pred = model_pipeline.predict(X_train)
# Make predictions on the validation data
valid_pred = model_pipeline.predict(X_valid)

# Calculate the training accuracy
train_acc = accuracy_score(y_true=y_train, y_pred=train_pred)
# Calculate the validation accuracy
valid_acc = accuracy_score(y_true=y_valid, y_pred=valid_pred)

# Print the training and validation accuracy
print("Train Accuracy :", train_acc)
print("Valid Accuracy :", valid_acc)

# 3. Save the model pipeline
# Save the entire pipeline (scaler + classifier) to a file for future use
joblib.dump(model_pipeline, "db_pipeline.joblib")

# 4. Save data
# Save the last 100 rows of data retrieved from the database into a CSV file named 'data.csv'
df.to_csv("data.csv", index=False)
