#ifndef ADDER_H
#define ADDER_H

// Adder 클래스 선언부
class Adder {
    int op1, op2;  // private 접근 제어자를 가지는 멤버 변수 선언
    // public 접근 제어자를 가지는 멤버 변수, 멤버 함수, 생성자 선언
    public:
    Adder(int a, int b);  // 매개변수가 두 개인 생성자 선언    
    int process();  // 멤버 함수 선언
};

#endif