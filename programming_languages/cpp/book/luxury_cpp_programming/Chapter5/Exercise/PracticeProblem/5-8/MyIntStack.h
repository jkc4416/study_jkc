#ifndef MYINTSTACK_H
#define MYINTSTACK_H
#include <iostream>
using namespace std;

// MyIntStack 클래스 선언부

// MyIntStack 클래스: 정수를 저장하는 스택 클래스
class MyIntStack {
private:
// private 접근 제어자를 가지는 멤버 변수 선언
    int* p;  // 동적으로 할당된 배열을 가리키는 포인터
    int size;  // 스택의 최대 크기
    int tos;  // 스택의 탑을 가리키는 인덱스 (Top of Stack)
public:
// public 접근 제어자를 가지는 생성자, 소멸자, 멤버 함수 선언
    MyIntStack();  // 기본 생성자 선언
    MyIntStack(int size);  // int 타입 매개변수 하나를 인자로 받는 생성자 선언
    MyIntStack(const MyIntStack& s);  // 복사 생성자 선언
    ~MyIntStack();  // 소멸자 선언
    bool push(int n);  // 정수 n을 스택에 푸시 (스택이 꽉 차있으면 false를, 아니면 true를 리턴)
    bool pop(int &n);  // 스택의 탑에 있는 값을 n에 pop한다. (만일 스택이 비어있으면 false를, 아니면 true를 리턴)
};

#endif