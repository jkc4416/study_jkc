#ifndef RECT_H
#define RECT_H

using namespace std; 

// Rect 클래스 선언부
class Rect{
// private 접근 제어자를 가지는 멤버 변수 선언
private:
    int width, height;
// public 접근 제어자를 가지는 생성자, 멤버 함수 선언
public:
    Rect();  // 기본 생성자 추가
    Rect(int w, int h);
    int getWidth();
    int getHeight();
    int getArea();
};

#endif
