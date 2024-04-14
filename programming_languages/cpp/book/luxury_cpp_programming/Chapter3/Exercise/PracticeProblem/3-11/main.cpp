// main.cpp
#include "Box.h"
#include <iostream>
using namespace std;

int main() {
    Box b(10, 2);  // Create a box of size 10x2
    b.draw();      // Draw the box
    cout << endl;  // Add a newline for separation

    b.setSize(7, 4);  // Change box size to 7x4
    b.setFill('^');  // Change fill character to '^'
    b.draw();        // Draw the modified box

    return 0;
}
