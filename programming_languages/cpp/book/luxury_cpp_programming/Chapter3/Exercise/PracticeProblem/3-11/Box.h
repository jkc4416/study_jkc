// Box.h
#ifndef BOX_H
#define BOX_H

class Box {
private:
    int width, height;  // Dimensions of the box
    char fill;          // Character to fill the box with

public:
    Box(int w, int h);  // Constructor with width and height
    void setFill(char f);  // Set the fill character
    void setSize(int w, int h);  // Set size of the box
    void draw();  // Draw the box
};

#endif
