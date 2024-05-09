#ifndef ACCUMULATOR_h
#define ACCUMULATOR_h
#include <iostream>
using namespace std;

// Accumulator 클래스 선언부

class Accumulator {
private:
// private 접근 제어자를 가지는 멤버 변수 선언
    int value;
public:
// public 접근 제어자를 가지는 생성자, 소멸자, 멤버 함수 선언
    Accumulator(int value);  // int 타입 매개변수 하나를 인자로 받는 생성자 선언 (매개변수 value로 멤버 value 초기화)
    Accumulator& add(int n);  // Accumulator의 참조를 리턴하는 멤버 함수 선언 (value에 n을 더해 값을 누적함)
    int get();  // int 타입 값을 리턴하는 멤버 함수 선언 (누적된 값 value를 리턴)
};

#endif