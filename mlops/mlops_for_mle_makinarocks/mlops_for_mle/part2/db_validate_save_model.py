# Import necessary modules
import joblib  # For loading the saved model pipeline
import pandas as pd  # For loading and handling the CSV data
from sklearn.metrics import accuracy_score  # To calculate accuracy of the model
from sklearn.model_selection import train_test_split  # To split the dataset into training and validation sets

# 1. Reproduce data
# Load the data from the 'data.csv' file (this file was previously saved in the training script)
df = pd.read_csv("data.csv")

# Prepare the feature matrix X by dropping columns 'id', 'timestamp', and 'target' from the DataFrame
X = df.drop(["id", "timestamp", "target"], axis="columns")
# Extract the target column (y) from the DataFrame
y = df["target"]

# Split the data into training (80%) and validation (20%) sets, using the same random state for consistency
X_train, X_valid, y_train, y_valid = train_test_split(X, y, train_size=0.8, random_state=2022)

# 2. Load model
# Load the previously saved pipeline model (which includes both the scaler and classifier) from 'db_pipeline.joblib'
pipeline_load = joblib.load("db_pipeline.joblib")

# 3. Validate
# Use the loaded pipeline to make predictions on the training data
load_train_pred = pipeline_load.predict(X_train)
# Use the loaded pipeline to make predictions on the validation data
load_valid_pred = pipeline_load.predict(X_valid)

# Calculate the training accuracy using the loaded pipeline
load_train_acc = accuracy_score(y_true=y_train, y_pred=load_train_pred)
# Calculate the validation accuracy using the loaded pipeline
load_valid_acc = accuracy_score(y_true=y_valid, y_pred=load_valid_pred)

# Print the accuracy for the training and validation sets
print("Load Model Train Accuracy :", load_train_acc)
print("Load Model Valid Accuracy :", load_valid_acc)
