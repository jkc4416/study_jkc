// MyStack.cpp
#include "MyStack.h"

// 생성자 정의: 스택의 용량을 초기화하고 top 인덱스를 -1로 초기화합니다.
MyStack::MyStack(int capacity) : BaseArray(capacity), top(-1) {}

// 스택에 값을 푸시하는 함수 정의
void MyStack::push(int val) {
    if (top < getCapacity() - 1) {  // 스택이 가득 차지 않았을 때만 푸시
        put(++top, val);  // top을 증가시키고 해당 위치에 값을 저장
    }
}

// 스택에서 값을 팝하고 반환하는 함수 정의
int MyStack::pop() {
    if (top >= 0) {  // 스택이 비어 있지 않을 때만 팝
        return get(top--);  // top 위치의 값을 반환하고 top을 감소시킴 (top 위치의 요소를 먼저 출력한 뒤에 top 값을 감소시킴)
    }
    return -1;  // 스택이 비어 있는 경우 -1 반환
}

// 스택의 현재 크기를 반환하는 함수 정의
int MyStack::length() const {
    return top + 1;
}

// 스택의 용량을 반환하는 함수 정의
int MyStack::capacity() const {
    return getCapacity();
}
