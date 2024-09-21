# Import necessary modules
import os  # To set environment variables
from argparse import ArgumentParser  # For command-line argument parsing

import mlflow  # To manage ML experiments and model registry
import pandas as pd  # For data manipulation and handling
import psycopg2  # To connect to a PostgreSQL database
from sklearn.metrics import accuracy_score  # To calculate model accuracy
from sklearn.model_selection import train_test_split  # To split the dataset into training and validation sets
from sklearn.pipeline import Pipeline  # To create a pipeline of sequential steps (preprocessing and model)
from sklearn.preprocessing import StandardScaler  # For feature scaling
from sklearn.svm import SVC  # Support Vector Classifier (SVM algorithm)

# 0. Set up MLflow environment variables
# These variables set up MLflow to store models and logs in an S3-compatible storage (MinIO) and track experiments
os.environ["MLFLOW_S3_ENDPOINT_URL"] = "http://localhost:9000"  # MinIO S3 storage endpoint
os.environ["MLFLOW_TRACKING_URI"] = "http://localhost:5001"  # MLflow tracking server URI
os.environ["AWS_ACCESS_KEY_ID"] = "minio"  # MinIO access key
os.environ["AWS_SECRET_ACCESS_KEY"] = "miniostorage"  # MinIO secret access key

# 1. Get data
# Connect to a PostgreSQL database
db_connect = psycopg2.connect(
    user="myuser",         # Database username
    password="mypassword", # Database password
    host="localhost",      # Host (localhost for local setup)
    port=5432,             # Port (default for PostgreSQL is 5432)
    database="mydatabase", # The database name
)

# Execute SQL query to get the latest 100 rows from the 'iris_data' table
df = pd.read_sql("SELECT * FROM iris_data ORDER BY id DESC LIMIT 100", db_connect)

# Prepare the feature matrix X by dropping 'id', 'timestamp', and 'target' columns
X = df.drop(["id", "timestamp", "target"], axis="columns")
# Extract the target (y) from the 'target' column
y = df["target"]

# Split the data into training (80%) and validation (20%) sets
X_train, X_valid, y_train, y_valid = train_test_split(X, y, train_size=0.8, random_state=2022)

# 2. Model development and training
# Create a pipeline with two steps: StandardScaler (for feature scaling) and SVC (Support Vector Classifier)
model_pipeline = Pipeline([("scaler", StandardScaler()), ("svc", SVC())])

# Train the pipeline (scale features and fit the classifier) on the training data
model_pipeline.fit(X_train, y_train)

# Make predictions on the training and validation datasets
train_pred = model_pipeline.predict(X_train)
valid_pred = model_pipeline.predict(X_valid)

# Calculate accuracy on the training set
train_acc = accuracy_score(y_true=y_train, y_pred=train_pred)
# Calculate accuracy on the validation set
valid_acc = accuracy_score(y_true=y_valid, y_pred=valid_pred)

# Print the training and validation accuracy
print("Train Accuracy :", train_acc)
print("Valid Accuracy :", valid_acc)

# 3. Save the model using MLflow
# Parse command-line arguments to get the model name (default: 'sk_model')
parser = ArgumentParser()
parser.add_argument("--model-name", dest="model_name", type=str, default="sk_model")
args = parser.parse_args()

# Set the MLflow experiment to "new-exp"
mlflow.set_experiment("new-exp")

# Infer the model's input signature (feature names, shapes, and types) based on training data
signature = mlflow.models.signature.infer_signature(model_input=X_train, model_output=train_pred)
# Capture an input example (the first 10 rows of the training data)
input_sample = X_train.iloc[:10]

# Start a new MLflow run for logging
with mlflow.start_run():
    # Log the training and validation accuracy as metrics in MLflow
    mlflow.log_metrics({"train_acc": train_acc, "valid_acc": valid_acc})
    
    # Log the model pipeline to the MLflow model registry with the provided model name
    mlflow.sklearn.log_model(
        sk_model=model_pipeline,       # The trained model pipeline
        artifact_path=args.model_name, # Path to save the model
        signature=signature,           # Model signature for inputs/outputs
        input_example=input_sample,    # Example inputs (first 10 rows of training data)
    )

# 4. Save the data to a CSV file
# Save the DataFrame that was loaded from the database into a CSV file for future use
df.to_csv("data.csv", index=False)
