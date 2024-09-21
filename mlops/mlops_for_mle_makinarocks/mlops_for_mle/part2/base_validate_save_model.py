# Import necessary modules
import joblib  # For loading the saved scaler and classifier models
from sklearn.datasets import load_iris  # To load the Iris dataset
from sklearn.metrics import accuracy_score  # To calculate accuracy of the model
from sklearn.model_selection import train_test_split  # To split the dataset into training and validation sets

# 1. Reproduce data
# Load the Iris dataset into feature matrix X and target vector y
X, y = load_iris(return_X_y=True, as_frame=True)
# Split the dataset into training (80%) and validation (20%) sets, using the same random state as before
X_train, X_valid, y_train, y_valid = train_test_split(X, y, train_size=0.8, random_state=2022)

# 2. Load models
# Load the previously saved scaler object from the "scaler.joblib" file
scaler_load = joblib.load("scaler.joblib")
# Load the previously saved classifier object from the "classifier.joblib" file
classifier_load = joblib.load("classifier.joblib")

# 3. Validate
# Apply the loaded scaler to transform the training data
scaled_X_train = scaler_load.transform(X_train)
# Apply the same scaler to transform the validation data
scaled_X_valid = scaler_load.transform(X_valid)

# Use the loaded classifier to make predictions on the scaled training data
load_train_pred = classifier_load.predict(scaled_X_train)
print(load_train_pred)
# Use the loaded classifier to make predictions on the scaled validation data
load_valid_pred = classifier_load.predict(scaled_X_valid)
print(load_valid_pred)

# Calculate the training accuracy using the loaded classifier
load_train_acc = accuracy_score(y_true=y_train, y_pred=load_train_pred)
# Calculate the validation accuracy using the loaded classifier
load_valid_acc = accuracy_score(y_true=y_valid, y_pred=load_valid_pred)

# Print the accuracy for the training and validation sets from the loaded model
print("Load Model Train Accuracy :", load_train_acc)
print("Load Model Valid Accuracy :", load_valid_acc)
