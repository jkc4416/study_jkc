#ifndef MYINTSTACK_H
#define MYINTSTACK_H
#include <iostream>
using namespace std;

class MyIntStack {
private:
    int* p;  // 스택 메모리로 사용할 포인터
    int size;  // 스택의 최대 크기
    int tos;  // 스택의 탑을 가리키는 인덱스
public:
    MyIntStack();  // 기본 생성자 선언
    MyIntStack(int size);  // int 타입 매개변수 하나를 인자로 받는 생성자 선언
    MyIntStack(const MyIntStack& s);  // 복사 생성자 선언
    ~MyIntStack();  // 소멸자 선언
    bool push(int n);  // 정수 n을 스택에 푸시 (스택이 꽉 차있으면 false를, 아니면 true를 리턴)
    bool pop(int &n);  // 스택의 탑에 있는 값을 n에 pop한다. (만일 스택이 비어있으면 false를, 아니면 true를 리턴)
    
};

#endif