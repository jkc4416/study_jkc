#include "Color.h"
#include <iostream>
using namespace std;

// Color 클래스의 구현부
// Color 클래스 기본 생성자 구현
Color::Color() {
    red = green = blue = 0;
}
// 세 개의 int 타입 매개변수를 받는 Color 클래스 생성자 구현
Color::Color(int r, int g, int b) {
    red = r;
    green = g;
    blue = b;
}
// Color 클래스의 setColor 멤버 함수 구현
void Color::setColor(int r, int g, int b)  {
    red = r;
    green = g;
    blue = b;
}
// Color 클래스의 show 멤버 함수 구현
void Color::show() {
    cout << red << ' ' << green << ' ' << blue << endl;
}