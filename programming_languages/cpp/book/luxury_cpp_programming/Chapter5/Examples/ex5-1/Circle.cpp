#include "Circle.h"
using namespace std;

// Circle 클래스 구현부

// 위임 생성자 구현
Circle::Circle() : Circle(1) { }
// 타겟 생성자 구현
Circle::Circle(int r) {
    radius = r;
    cout << "생성자 실행 radius = " << radius << endl;
}
// 소멸자 구현
Circle::~Circle() {
    cout << "소멸자 실행 radius = " << radius << endl;
}
double Circle::getArea() {
    return 3.141592*radius*radius;
}
int Circle::getRadius() {
    return radius;
}
void Circle::setRadius(int radius) {
    this->radius = radius;
}