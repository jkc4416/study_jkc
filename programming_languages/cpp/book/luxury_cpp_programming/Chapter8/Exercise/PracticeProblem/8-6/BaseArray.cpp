// BaseArray.cpp
#include "BaseArray.h"

// 생성자 정의: 배열의 크기를 초기화하고 메모리를 할당합니다.
BaseArray::BaseArray(int capacity) {
    this->capacity = capacity;
    mem = new int[capacity];
}

// 소멸자 정의: 동적으로 할당된 메모리를 해제합니다.
BaseArray::~BaseArray() {
    delete[] mem;
}

// 배열의 특정 인덱스에 값을 저장하는 함수 정의
void BaseArray::put(int index, int val) {
    mem[index] = val;
}

// 배열의 특정 인덱스에 있는 값을 반환하는 함수 정의
int BaseArray::get(int index) const {
    return mem[index];
}

// 배열의 크기를 반환하는 함수 정의
int BaseArray::getCapacity() const {
    return capacity;
}
