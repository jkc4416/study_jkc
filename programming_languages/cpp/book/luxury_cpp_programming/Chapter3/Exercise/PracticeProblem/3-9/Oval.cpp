#include "Oval.h"
using namespace std;

Oval::Oval() : Oval(1, 1) {} // 기본 생성자의 구현

Oval::Oval(int w, int h) : width(w), height(h) {} // 매개변수를 받는 생성자의 구현

Oval::~Oval() { // 소멸자의 구현
    cout << "Oval 소멸: width = " << width << ", height = " << height << endl;
}

int Oval::getWidth() const { // 너비를 리턴
    return width;
}

int Oval::getHeight() const { // 높이를 리턴
    return height;
}

void Oval::set(int w, int h) { // 너비와 높이를 설정
    width = w;
    height = h;
}

void Oval::show() const { // 너비와 높이를 화면에 출력
    cout << "width = " << width << ", height = " << height << endl;
}
