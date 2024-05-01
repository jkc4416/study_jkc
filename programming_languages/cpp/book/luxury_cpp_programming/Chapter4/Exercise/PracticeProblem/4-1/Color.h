#ifndef COLOR_H
#define COLOR_H

#include <string>
using namespace std; 

// Color 클래스 선언부
class Color {
// private 접근 제어자를 가지는 멤버 변수 선언
private:
    int red, green, blue;
// public 접근 제어자를 가지는 생성자, 멤버 함수 선언
public:
    Color();
    Color(int r, int g, int b);
    void setColor(int r, int g, int b);
    void show();
};

#endif




