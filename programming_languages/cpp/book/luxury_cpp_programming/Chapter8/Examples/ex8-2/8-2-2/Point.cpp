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

// 두 컬러 점의 좌표와 색상을 비교하는 멤버 함수
bool ColorPoint::equals(ColorPoint p) {
    // Point 클래스의 x, y는 protected 멤버이므로 파생 클래스인 ColorPoint에서 접근이 가능함
    if(x == p.x && y == p.y && color == p.color) {
        return true;
    } else {
        return false;
    }
}
