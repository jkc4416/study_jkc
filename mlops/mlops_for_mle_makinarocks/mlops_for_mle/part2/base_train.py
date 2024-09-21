# Import necessary modules
import joblib  # For saving and loading models and objects
from sklearn.datasets import load_iris  # To load the Iris dataset
from sklearn.metrics import accuracy_score  # To calculate accuracy of the model
from sklearn.model_selection import train_test_split  # To split the dataset into training and validation sets
from sklearn.preprocessing import StandardScaler  # For scaling features
from sklearn.svm import SVC  # Support Vector Classifier (SVM algorithm)

# 1. Get data
# Load the Iris dataset into feature matrix X and target vector y
X, y = load_iris(return_X_y=True, as_frame=True)
# Split the dataset into training (80%) and validation (20%) sets, using a fixed random state for reproducibility
X_train, X_valid, y_train, y_valid = train_test_split(X, y, train_size=0.8, random_state=2022)

# 2. Model development and training
# Initialize a StandardScaler object for feature scaling
scaler = StandardScaler()
# Initialize a Support Vector Classifier (SVC) model
classifier = SVC()

# Scale the training data (fit the scaler on the training data and transform it)
scaled_X_train = scaler.fit_transform(X_train)
# Scale the validation data (transform it using the already fitted scaler)
scaled_X_valid = scaler.transform(X_valid)

# Train the classifier using the scaled training data
classifier.fit(scaled_X_train, y_train)

# Make predictions on the training data
train_pred = classifier.predict(scaled_X_train)
# Make predictions on the validation data
valid_pred = classifier.predict(scaled_X_valid)

# Calculate the training accuracy
train_acc = accuracy_score(y_true=y_train, y_pred=train_pred)
# Calculate the validation accuracy
valid_acc = accuracy_score(y_true=y_valid, y_pred=valid_pred)

# Print the training and validation accuracy
print("Train Accuracy :", train_acc)
print("Valid Accuracy :", valid_acc)

# 3. Save model
# Save the scaler object to a file for future use (so that data can be scaled the same way)
joblib.dump(scaler, "scaler.joblib")
# Save the trained classifier model to a file
joblib.dump(classifier, "classifier.joblib")
