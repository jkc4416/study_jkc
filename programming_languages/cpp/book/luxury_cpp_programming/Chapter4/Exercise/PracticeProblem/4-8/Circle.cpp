#include "Circle.h"
#include <iostream>
using namespace std;

// Circle 클래스의 구현부
// 위임 생성자 구현
Circle::Circle() : Circle(1) { }
// 타겟 생성자 구현
Circle::Circle(int r) {
    radius = r;
}
// Circle 클래스의 setRadius() 멤버 함수 구현
void Circle::setRadius(int r) {
    radius = r;
}
// Circle 클래스의 getArea() 멤버 함수 구현
double Circle::getArea() {  // 정수 배열을 화면에 출력
    return 3.14*radius*radius;
}