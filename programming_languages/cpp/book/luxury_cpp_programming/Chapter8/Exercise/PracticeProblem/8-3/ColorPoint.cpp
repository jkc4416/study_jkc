// ColorPoint.cpp
#include "ColorPoint.h"

// 생성자 정의: 좌표와 색상을 초기화
ColorPoint::ColorPoint(int x, int y, const string& color) : Point(x, y), color(color) {}

// 색상을 반환하는 함수 정의
string ColorPoint::getColor() const {
    return color;
}

// 색상을 설정하는 함수 정의
void ColorPoint::setColor(const string& color) {
    this->color = color;
}

// 점의 정보를 출력하는 함수 정의
void ColorPoint::show() const {
    cout << "(" << getX() << ", " << getY() << ")에 위치한 " << color << "색 점입니다." << endl;
}
