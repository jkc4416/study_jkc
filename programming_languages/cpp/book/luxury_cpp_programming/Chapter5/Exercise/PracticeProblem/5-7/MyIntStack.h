#ifndef MYINTSTACK_H
#define MYINTSTACK_H
#include <iostream>
using namespace std;

class MyIntStack {
private:
    int p[10];  // 최대 10개의 정수 저장
    int tos;  // 스택의 꼭대기를 가리키는 인덱스
public:
    MyIntStack();  // 기본 생성자 선언
    bool push(int n);  // 정수 n을 스택에 푸시 (스택이 꽉 차있으면 false를, 아니면 true를 리턴)
    bool pop(int &n);  // 스택의 탑에 있는 값을 pop 하여 n에 저장. (만일 스택이 비어있으면 false를, 아니면 true를 리턴)
    
};

#endif