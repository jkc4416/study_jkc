// Point.cpp
#include "Point.h"

// 생성자 정의: 좌표를 초기화
Point::Point(int x, int y) : x(x), y(y) {}

// x 좌표를 반환하는 함수 정의
int Point::getX() const {
    return x;
}

// y 좌표를 반환하는 함수 정의
int Point::getY() const {
    return y;
}

// 좌표를 설정하는 함수 정의
void Point::setPoint(int x, int y) {
    this->x = x;
    this->y = y;
}
