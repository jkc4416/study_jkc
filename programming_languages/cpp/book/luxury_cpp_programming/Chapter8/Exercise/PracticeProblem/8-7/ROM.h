// ROM.h
#ifndef ROM_H
#define ROM_H

#include "BaseMemory.h"

// ROM 클래스 정의: 읽기 전용 메모리, BaseMemory를 상속
class ROM : public BaseMemory {
public:
    // 생성자: 메모리 크기와 초기화할 데이터를 받아 초기화합니다.
    ROM(int size, char *data, int dataSize);

    // ROM 메모리에서 값을 읽는 함수
    char read(int index) const;
};

#endif
