#ifndef CIRCLE_H
#define CIRCLE_H

// Circle 클래스 선언부
class Circle {
    // private 접근 제어자를 가지는 멤버 변수 및 멤버 함수 선언
    private:
    int radius;  // 멤버 변수 선언
    // public 접근 제어자를 가지는 멤버 변수 및 멤버 함수 선언
    public:
    Circle();  // 매개변수가 없는 기본 생성자 선언
    Circle(int r);  // 매개변수가 하나인 생성자 선언
    double getArea();  // 멤버 함수 선언
};
#endif