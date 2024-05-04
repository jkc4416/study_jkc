#include "Container.h"

// Constructor that initializes the container to maximum size when a new container is created
Container::Container() : size(max_size) {}

// Fills the container to the maximum size
void Container::fill() {
    size = max_size;
}

// Consumes a specified amount from the container
void Container::consume(int amount) {
    if (size >= amount) {
        size -= amount;
    } else {
        size = 0;  // Prevents the container size from going negative
    }
}

// Returns the current amount of content in the container
int Container::getSize() const {
    return size;
}
