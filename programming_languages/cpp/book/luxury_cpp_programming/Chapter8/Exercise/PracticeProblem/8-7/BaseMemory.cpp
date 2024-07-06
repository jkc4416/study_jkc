// BaseMemory.cpp
#include "BaseMemory.h"

// 생성자 정의: 메모리 크기를 초기화하고 메모리를 할당합니다.
BaseMemory::BaseMemory(int size) {
    mem = new char[size];
}

// 소멸자 정의: 동적으로 할당된 메모리를 해제합니다.
BaseMemory::~BaseMemory() {
    delete[] mem;
}

// 메모리의 특정 인덱스에 값을 저장하는 함수 정의
void BaseMemory::setMem(int index, char val) {
    mem[index] = val;
}

// 메모리의 특정 인덱스에 있는 값을 반환하는 함수 정의
char BaseMemory::getMem(int index) const {
    return mem[index];
}
