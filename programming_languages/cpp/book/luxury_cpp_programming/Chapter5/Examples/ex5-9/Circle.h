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
    Circle(const Circle& c);  // 복사 생성자 선언
    double getArea();
};

#endif