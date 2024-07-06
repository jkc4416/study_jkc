// RAM.cpp
#include "RAM.h"

// 생성자 정의: 메모리 크기를 받아 초기화합니다.
RAM::RAM(int size) : BaseMemory(size) {}

// RAM 메모리에 값을 쓰는 함수 정의
void RAM::write(int index, char val) {
    setMem(index, val);
}

// RAM 메모리에서 값을 읽는 함수 정의
char RAM::read(int index) const {
    return getMem(index);
}
