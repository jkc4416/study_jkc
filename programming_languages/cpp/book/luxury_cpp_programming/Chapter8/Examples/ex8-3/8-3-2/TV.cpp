#include "TV.h"

// 기본 생성자: TV의 크기를 20으로 초기화
TV::TV() {
    size = 20; 
}

// 매개변수로 스크린 크기를 받아서 초기화하는 생성자
TV::TV(int size) {
    this->size = size;  // 멤버 변수 size를 매개변수 size로 초기화
}

// TV의 크기를 반환하는 멤버 함수
int TV::getSize() {
    return size;
}
