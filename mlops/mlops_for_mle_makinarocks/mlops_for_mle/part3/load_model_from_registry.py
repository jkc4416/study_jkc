# Import necessary modules
import os  # To set environment variables
from argparse import ArgumentParser  # For parsing command-line arguments

import mlflow  # To interact with MLflow model registry
import pandas as pd  # For data manipulation and handling
from sklearn.metrics import accuracy_score  # To calculate accuracy of the model
from sklearn.model_selection import train_test_split  # To split the dataset into training and validation sets

# 0. Set up MLflow environment variables
# These environment variables configure MLflow to connect to MinIO (S3-compatible storage) and the MLflow tracking server
os.environ["MLFLOW_S3_ENDPOINT_URL"] = "http://localhost:9000"  # MinIO storage endpoint
os.environ["MLFLOW_TRACKING_URI"] = "http://localhost:5001"  # MLflow tracking server URI
os.environ["AWS_ACCESS_KEY_ID"] = "minio"  # MinIO access key
os.environ["AWS_SECRET_ACCESS_KEY"] = "miniostorage"  # MinIO secret access key

# 1. Load the model from MLflow
# Create a parser to accept command-line arguments
parser = ArgumentParser()
# Define a command-line argument for the model name (default: 'sk_model')
parser.add_argument("--model-name", dest="model_name", type=str, default="sk_model")
# Define a command-line argument to provide the MLflow run ID
parser.add_argument("--run-id", dest="run_id", type=str)
# Parse the command-line arguments
args = parser.parse_args()

# Load the saved model pipeline from MLflow's model registry using the provided run ID and model name
model_pipeline = mlflow.sklearn.load_model(f"runs:/{args.run_id}/{args.model_name}")

# 2. Get data
# Load the dataset from the previously saved 'data.csv' file
df = pd.read_csv("data.csv")

# Prepare the feature matrix X by dropping 'id', 'timestamp', and 'target' columns
X = df.drop(["id", "timestamp", "target"], axis="columns")
# Extract the target (y) from the 'target' column
y = df["target"]

# Split the data into training (80%) and validation (20%) sets, using the same random state for consistency
X_train, X_valid, y_train, y_valid = train_test_split(X, y, train_size=0.8, random_state=2022)

# 3. Predict results
# Use the loaded model pipeline to make predictions on the training data
train_pred = model_pipeline.predict(X_train)
# Use the loaded model pipeline to make predictions on the validation data
valid_pred = model_pipeline.predict(X_valid)

# Calculate the training accuracy using the loaded model
train_acc = accuracy_score(y_true=y_train, y_pred=train_pred)
# Calculate the validation accuracy using the loaded model
valid_acc = accuracy_score(y_true=y_valid, y_pred=valid_pred)

# Print the accuracy for the training and validation sets
print("Train Accuracy :", train_acc)
print("Valid Accuracy :", valid_acc)
