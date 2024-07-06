// MyQueue.h
#ifndef MYQUEUE_H
#define MYQUEUE_H

#include "BaseArray.h"

// MyQueue 클래스 정의: BaseArray 클래스를 상속받아 큐의 기능을 추가
class MyQueue : public BaseArray {
private:
    int front;  // 큐의 앞쪽 인덱스
    int rear;   // 큐의 뒤쪽 인덱스
    int size;   // 큐의 현재 크기
public:
    // 생성자: 큐의 크기를 초기화하고, front와 rear 인덱스를 0으로 초기화합니다.
    MyQueue(int capacity = 100);

    // 큐에 값을 삽입하는 함수
    void enqueue(int val);

    // 큐에서 값을 제거하고 반환하는 함수
    int dequeue();

    // 큐의 현재 크기를 반환하는 함수
    int length() const;

    // 큐의 용량을 반환하는 함수
    int capacity() const;
};

#endif
