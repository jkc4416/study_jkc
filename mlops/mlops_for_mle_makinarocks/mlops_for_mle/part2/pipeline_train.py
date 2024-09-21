# Import necessary modules
import joblib  # For saving and loading models and pipelines
from sklearn.datasets import load_iris  # To load the Iris dataset
from sklearn.metrics import accuracy_score  # To calculate accuracy of the model
from sklearn.model_selection import train_test_split  # To split the dataset into training and validation sets
from sklearn.pipeline import Pipeline  # To create a pipeline of sequential processing steps
from sklearn.preprocessing import StandardScaler  # For scaling features
from sklearn.svm import SVC  # Support Vector Classifier (SVM algorithm)

# 1. Get data
# Load the Iris dataset into feature matrix X and target vector y
X, y = load_iris(return_X_y=True, as_frame=True)
# Split the dataset into training (80%) and validation (20%) sets, using a fixed random state for reproducibility
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
joblib.dump(model_pipeline, "model_pipeline.joblib")
