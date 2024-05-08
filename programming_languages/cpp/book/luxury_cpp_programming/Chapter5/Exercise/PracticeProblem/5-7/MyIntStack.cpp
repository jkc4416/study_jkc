#include "MyIntStack.h"
using namespace std;

// 기본 생성자 구현
MyIntStack::MyIntStack() : tos(-1) {}  // 스택 초기화, tos를 -1로 설정

// push 함수 구현
bool MyIntStack::push(int n) {
    if (tos >= 9)  // 스택이 꽉 찼는지 확인
        return false;  // 꽉 찼다면 false 반환
    p[++tos] = n;  // 스택이 꽉 차지 않았다면, tos를 증가시키고 그 위치에 n 저장
    return true;  // 성공적으로 푸시했다면 true 반환
}

// pop 함수 구현
bool MyIntStack::pop(int &n) {
    if (tos == -1)  // 스택이 비었는지 확인
        return false;  // 비었다면 false 반환
    n = p[tos--];  // 스택이 비지 않았다면, 현재 tos의 값을 n에 저장하고 tos를 감소
    return true;  // 성공적으로 팝했다면 true 반환
}

