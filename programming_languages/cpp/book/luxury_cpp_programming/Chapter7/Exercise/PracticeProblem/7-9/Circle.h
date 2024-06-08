#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
using namespace std;

class Circle {
private:
    int radius;  // 원의 반지름

public:
    Circle(int radius=0);  // 생성자 선언
    void show();  // 원의 정보를 출력하는 멤버 함수

    // 연산자 오버로딩을 위한 프렌드 함수 선언
    friend Circle operator+(int n, const Circle& c);  // int 값과 Circle 객체의 덧셈을 처리하는 프렌드 함수
};

#endif
