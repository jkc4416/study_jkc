#include "Circle.h"

// Circle 클래스의 구현부

// Circle 클래스의 생성자 구현
Circle::Circle(int r) {
    radius = r;
    numOfCircles++;  // 생성된 원의 개수 증가
}

// Circle 클래스의 소멸자 구현
Circle::~Circle() {
    numOfCircles--;
}

// Circle 클래스의 getArea 멤버 함수 구현
double Circle::getArea() {
    return radius*radius*3.141592;
}

// Circle 클래스의 getNumOfCircles 멤버 함수 구현
int Circle::getNumofCircles() {
    return numOfCircles;
}

int Circle::numOfCircles = 0;  // 0으로 초기화

