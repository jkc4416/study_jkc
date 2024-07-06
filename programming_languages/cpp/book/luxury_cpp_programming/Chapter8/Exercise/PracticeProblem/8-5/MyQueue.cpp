// MyQueue.cpp
#include "MyQueue.h"

// 생성자 정의: 큐의 크기를 초기화하고, front와 rear 인덱스를 0으로 초기화합니다.
MyQueue::MyQueue(int capacity) : BaseArray(capacity), front(0), rear(0), size(0) {}

// 큐에 값을 삽입하는 함수 정의
void MyQueue::enqueue(int val) {
    if (size < getCapacity()) { // 큐가 가득 차지 않았을 때만 삽입
        put(rear, val); // rear 위치에 값을 저장
        rear = (rear + 1) % getCapacity(); // rear 인덱스를 순환시키며 증가
        size++; // 큐의 크기 증가
    }
}

// 큐에서 값을 제거하고 반환하는 함수 정의
int MyQueue::dequeue() {
    if (size > 0) { // 큐가 비어있지 않을 때만 제거
        int val = get(front); // front 위치의 값을 반환
        front = (front + 1) % getCapacity(); // front 인덱스를 순환시키며 증가
        size--; // 큐의 크기 감소
        return val;
    }
    return -1; // 큐가 비어있는 경우 -1 반환
}

// 큐의 현재 크기를 반환하는 함수 정의
int MyQueue::length() const {
    return size;
}

// 큐의 용량을 반환하는 함수 정의
int MyQueue::capacity() const {
    return getCapacity();
}
