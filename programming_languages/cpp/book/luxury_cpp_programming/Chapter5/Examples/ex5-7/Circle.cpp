#include "Circle.h"
using namespace std;

// Circle 클래스 구현부

// 위임 생성자 구현
Circle::Circle() : Circle(1) { }
// 타겟 생성자 구현
Circle::Circle(int r) {
    radius = r;
}
double Circle::getArea() {
    return 3.141592*radius*radius;
}
void Circle::setRadius(int radius) {
    this->radius = radius;
}