#ifndef CIRCLE_H
#define CIRCLE_H
#include <string>
using namespace std; 

// Circle 클래스 선언부
class Circle {
// private 접근 제어자를 가지는 멤버 변수 선언
private:
    int radius;
// public 접근 제어자를 가지는 생성자, 멤버 함수 선언
public:
    Circle();  // 기본 생성자 선언
    Circle(int r);  // 매
    void setRadius(int r);  // 반지름을 설정한다.
    double getArea();  // 면적을 리턴한다.
};

#endif