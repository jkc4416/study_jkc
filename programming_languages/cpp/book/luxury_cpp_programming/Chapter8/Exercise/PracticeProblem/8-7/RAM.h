// RAM.h
#ifndef RAM_H
#define RAM_H

#include "BaseMemory.h"

// RAM 클래스 정의: 읽기 및 쓰기 가능한 메모리, BaseMemory를 상속
class RAM : public BaseMemory {
public:
    // 생성자: 메모리 크기를 받아 초기화합니다.
    RAM(int size);

    // RAM 메모리에 값을 쓰는 함수
    void write(int index, char val);

    // RAM 메모리에서 값을 읽는 함수
    char read(int index) const;
};

#endif
