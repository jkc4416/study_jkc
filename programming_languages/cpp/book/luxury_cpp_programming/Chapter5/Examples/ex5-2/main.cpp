#include <iostream>
#include "Circle.h"
using namespace std;

Circle getCircle() {
    Circle tmp(30);
    return tmp;  // Circle 타입 객체인 tmp를 반환
}

int main() {
    Circle c;  // Circle 타입 객체 생성 (radius=1로 초기화)
    cout << c.getArea() << endl;

    c = getCircle();  // 객체 치환
    cout << c.getArea() << endl;
}