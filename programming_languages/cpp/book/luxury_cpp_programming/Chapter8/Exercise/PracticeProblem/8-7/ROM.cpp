// ROM.cpp
#include "ROM.h"

// 생성자 정의: 메모리 크기와 초기화할 데이터를 받아 초기화합니다.
ROM::ROM(int size, char *data, int dataSize) : BaseMemory(size) {
    // 초기화할 데이터 크기만큼 메모리에 값을 설정합니다.
    for (int i = 0; i < dataSize; ++i) {
        setMem(i, data[i]);
    }
}

// ROM 메모리에서 값을 읽는 함수 정의
char ROM::read(int index) const {
    return getMem(index);
}
