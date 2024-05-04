#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <string>
using namespace std;

// Circle 클래스 선언부
class Circle {
// private 접근 제어자를 가지는 멤버 변수 선언
private:
    string name;  // 원의 이름을 저장하기 위한 멤버 변수 선언
    int radius;  // 원의 반지름 값을 저장하기 위한 멤버 변수 선언
// public 접근 제어자를 가지는 생성자, 멤버 함수 선언
public:
    Circle() : name(""), radius(0) {} // 초기화 리스트를 사용한 기본 생성자
    void setCircle(string name, int radius); // 원의 이름과 반지름 설정
    double getArea();   // 면적 계산을 위한 멤버 함수
    string getName(); // 원의 이름 반환을 위한 멤버 함수
};

#endif
