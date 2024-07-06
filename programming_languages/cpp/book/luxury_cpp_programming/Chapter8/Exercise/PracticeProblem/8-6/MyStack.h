// MyStack.h
#ifndef MYSTACK_H
#define MYSTACK_H

#include "BaseArray.h"

// MyStack 클래스 정의: BaseArray 클래스를 상속받아 스택 기능을 추가
class MyStack : public BaseArray {
private:
    int top;  // 스택의 최상위 원소를 가리키는 인덱스
public:
    // 생성자: 스택의 용량을 초기화하고 top 인덱스를 -1로 초기화합니다.
    MyStack(int capacity = 100);

    // 스택에 값을 푸시하는 함수
    void push(int val);

    // 스택에서 값을 팝하고 반환하는 함수
    int pop();

    // 스택의 현재 크기를 반환하는 함수
    int length() const;

    // 스택의 용량을 반환하는 함수
    int capacity() const;
};

#endif
