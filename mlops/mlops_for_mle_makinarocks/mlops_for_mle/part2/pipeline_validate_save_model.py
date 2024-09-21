# Import necessary modules
import joblib  # For loading the saved model pipeline
from sklearn.datasets import load_iris  # To load the Iris dataset
from sklearn.metrics import accuracy_score  # To calculate accuracy of the model
from sklearn.model_selection import train_test_split  # To split the dataset into training and validation sets

# 1. Reproduce data
# Load the Iris dataset into feature matrix X and target vector y
X, y = load_iris(return_X_y=True, as_frame=True)
# Split the dataset into training (80%) and validation (20%) sets, using the same random state as before
X_train, X_valid, y_train, y_valid = train_test_split(X, y, train_size=0.8, random_state=2022)

# 2. Load model
# Load the previously saved model pipeline (which includes both the scaler and classifier) from the "model_pipeline.joblib" file
model_pipeline_load = joblib.load("model_pipeline.joblib")

# 3. Validate
# Use the loaded model pipeline to make predictions on the training data
load_train_pred = model_pipeline_load.predict(X_train)
# Use the loaded model pipeline to make predictions on the validation data
load_valid_pred = model_pipeline_load.predict(X_valid)

# Calculate the training accuracy using the loaded model pipeline
load_train_acc = accuracy_score(y_true=y_train, y_pred=load_train_pred)
# Calculate the validation accuracy using the loaded model pipeline
load_valid_acc = accuracy_score(y_true=y_valid, y_pred=load_valid_pred)

# Print the accuracy for the training and validation sets from the loaded model
print("Load Model Train Accuracy :", load_train_acc)
print("Load Model Valid Accuracy :", load_valid_acc)
