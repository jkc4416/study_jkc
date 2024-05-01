#ifndef PALETTE_H
#define PALETTE_H
#include <string>
#include "Color.h"
using namespace std; 

// Pallete 클래스 선언부
class Palette {
// private 접근 제어자를 가지는 멤버 변수 선언
private:
    Color *p;  // Color 객체를 가리키는 포인터 변수 선언
// public 접근 제어자를 가지는 생성자, 멤버 함수 선언
public:
    Palette();
    ~Palette();
};

#endif