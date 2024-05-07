#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
using namespace std;

class Circle {
private:
    int radius;
public:
    Circle();
    Circle(int r);
    int getRadius();
    void setRadius(int r);
    void show();
};

#endif