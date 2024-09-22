# Import necessary modules
from fastapi import FastAPI, HTTPException  # FastAPI for API creation, HTTPException for error handling

# Create a FastAPI instance
app = FastAPI()  # Instantiate the FastAPI app

# In-memory user database (this will be reset each time the server restarts)
USER_DB = {}

# Define an HTTP exception to return when a user is not found in the database
NAME_NOT_FOUND = HTTPException(status_code=400, detail="Name not found.")  # 400 Bad Request for missing name

# Define a POST endpoint for creating a new user
# The path includes the user's name and nickname
@app.post("/users/name/{name}/nickname/{nickname}")
def create_user(name: str, nickname: str):
    # Add the user and nickname to the USER_DB dictionary
    USER_DB[name] = nickname
    # Return a success response
    return {"status": "success"}

# Define a GET endpoint for retrieving a user's nickname by their name
@app.get("/users/name/{name}")
def read_user(name: str):
    # Check if the user exists in the USER_DB
    if name not in USER_DB:
        # Raise a 400 error if the user is not found
        raise NAME_NOT_FOUND
    # Return the user's nickname
    return {"nickname": USER_DB[name]}

# Define a PUT endpoint for updating an existing user's nickname
# The path includes the user's name and the new nickname
@app.put("/users/name/{name}/nickname/{nickname}")
def update_user(name: str, nickname: str):
    # Check if the user exists in the USER_DB
    if name not in USER_DB:
        # Raise a 400 error if the user is not found
        raise NAME_NOT_FOUND
    # Update the user's nickname in the USER_DB
    USER_DB[name] = nickname
    # Return a success response
    return {"status": "success"}

# Define a DELETE endpoint for deleting a user by their name
@app.delete("/users/name/{name}")
def delete_user(name: str):
    # Check if the user exists in the USER_DB
    if name not in USER_DB:
        # Raise a 400 error if the user is not found
        raise NAME_NOT_FOUND
    # Delete the user from the USER_DB
    del USER_DB[name]
    # Return a success response
    return {"status": "success"}
