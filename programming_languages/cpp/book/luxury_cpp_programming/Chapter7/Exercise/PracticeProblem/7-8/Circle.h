#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
using namespace std;

// 원을 나타내는 Circle 클래스 선언
class Circle {
private:
    int radius;  // 원의 반지름

public:
    Circle(int radius=0);  // 생성자 선언
    void show();  // 원의 정보를 출력하는 멤버 함수

    // 연산자 오버로딩을 위한 프렌드 함수 선언
    friend Circle& operator++(Circle& c);  // 전위 증가 연산자
    friend Circle operator++(Circle& c, int);  // 후위 증가 연산자
};

#endif
