#include "Circle.h"

Circle::Circle(int r) {
    radius = r;
}

void Circle::setRadius(int r) {
    radius = r;
}

int Circle::getRadius() const {
    return radius;
}

// swap 함수: 두 Circle 객체의 반지름(radius) 값을 서로 교환합니다.
void swap(Circle& a, Circle& b) {
    int temp = a.radius;  // 첫 번째 객체의 반지름을 임시 변수에 저장
    a.radius = b.radius;  // 두 번째 객체의 반지름을 첫 번째 객체에 할당
    b.radius = temp;      // 임시 변수의 값을 두 번째 객체에 할당
}
