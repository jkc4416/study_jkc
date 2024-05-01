#include "Rect.h"
#include <iostream>

using namespace std; 

// Rect 클래스 구현부
// 기본 생성자 구현
Rect::Rect() {
    width = 1;
    height = 1;
}
// 두 개의 int 타입 매개변수가 있는 생성자 구현
Rect::Rect(int w, int h) {
    width = w;
    height = h;
}
// Rect 클래스의 getWidth 멤버 함수 구현
int Rect::getWidth() {
    return width;
}
// Rect 클래스의 getHeight 멤버 함수 구현
int Rect::getHeight() {
    return height;
}
// Rect 클래스의 getArea 멤버 함수 구현
int Rect::getArea() {
    return width*height;
}