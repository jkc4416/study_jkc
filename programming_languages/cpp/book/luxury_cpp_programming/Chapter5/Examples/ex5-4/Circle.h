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
    double getArea();
    void setRadius(int radius);
};

#endif