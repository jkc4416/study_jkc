// Ram.cpp
#include "Ram.h"
#include <iostream>
using namespace std;

// Ram 생성자 구현
Ram::Ram() {
    for (int i = 0; i < SIZE; i++) {
        mem[i] = 0;  // 메모리를 0으로 초기화
    }
}

// Ram 소멸자 구현
Ram::~Ram() {
    cout << "메모리 제거됨" << endl;
}

// Ram 클래스의 read 멤버 함수 구현
char Ram::read(int address) {
    if (address >= 0 && address < SIZE) {
        return mem[address];  // 주어진 주소의 데이터 리턴
    }
    return -1;  // 범위 밖 주소 접근 처리
}

// Ram 클래스의 write 멤버 함수 구현
void Ram::write(int address, char value) {
    if (address >= 0 && address < SIZE) {
        mem[address] = value;  // 주어진 주소에 값을 저장
    }
}
