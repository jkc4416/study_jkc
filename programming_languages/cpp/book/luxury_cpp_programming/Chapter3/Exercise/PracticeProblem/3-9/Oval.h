#ifndef OVAL_H
#define OVAL_H

#include <iostream>

// Oval 클래스 선언부
class Oval {
// private 접근 제어자를 가지는 멤버 변수 선언
private:
    int width, height; // 사각형 너비와 높이 (private 멤버 변수)
// public 접근 제어자를 가지는 생성자, 소멸자, 멤버 함수 선언
public:
    Oval(); // 기본 생성자 (매개변수 없음)
    Oval(int w, int h); // 너비와 높이를 매개변수로 받는 생성자 (int 타입 매개변수 두 개)
    ~Oval(); // 소멸자
    int getWidth() const; // 너비를 리턴하는 멤버 함수
    int getHeight() const; // 높이를 리턴하는 멤버 함수
    void set(int w, int h); // 너비와 높이를 변경하는 멤버 함수
    void show() const; // 너비와 높이를 화면에 출력하는 멤버 함수
};

#endif // OVAL_H
