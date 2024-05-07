#include "Circle.h"
using namespace std;

// Circle 클래스 구현부

// 위임 생성자 구현
Circle::Circle() : Circle(1) { }
// 타겟 생성자 구현
Circle::Circle(int r) {
    radius = r;
}
// Circle 클래스의 getRadius 멤버 함수 구현
int Circle::getRadius() {
    return radius;
}
// Circle 클래스의 setRadius 멤버 함수 구현
void Circle::setRadius(int r) {
    radius = r;
}
// Circle 클래스의 show 멤버 함수 구현
void Circle::show() {
    cout << "반지름이 " << radius << "인 원" << endl;
}