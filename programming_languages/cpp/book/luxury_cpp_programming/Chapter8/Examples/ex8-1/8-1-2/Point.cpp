#include "Point.h"

// Point 클래스의 멤버 함수 정의

// 좌표를 설정하는 멤버 함수
void Point::set(int x, int y) {
    this->x = x;
    this->y = y;
}

// 좌표를 출력하는 멤버 함수
void Point::showPoint() {
    cout << "{" << x << "," << y << "}" << endl;
}

// ColorPoint 클래스의 멤버 함수 정의

// 색상을 설정하는 멤버 함수
void ColorPoint::setColor(string color) {
    this->color = color;
}

// 색상과 좌표를 출력하는 멤버 함수
void ColorPoint::showColorPoint() {
    cout << color << ":";
    showPoint();  // Point의 showPoint() 호출
}
