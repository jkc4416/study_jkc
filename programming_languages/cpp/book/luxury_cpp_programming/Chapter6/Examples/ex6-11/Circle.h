#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
using namespace std;

// Circle 클래스 선언부

class Circle {
private:
    static int numOfCircles;  // 생성된 원의 개수 기억
    int radius;
public:
    Circle(int r=1);
    ~Circle();
    double getArea();
    static int getNumofCircles();
};

#endif
