// Circle.cpp
#include "Circle.h"

// 생성자 정의: 반지름을 초기화
Circle::Circle(int radius) : radius(radius) {}

// 반지름을 반환하는 함수 정의
int Circle::getRadius() const {
    return radius;
}

// 반지름을 설정하는 함수 정의
void Circle::setRadius(int radius) {
    this->radius = radius;
}

// 원의 넓이를 계산하여 반환하는 함수 정의
double Circle::getArea() const {
    return 3.14 * radius * radius;
}
