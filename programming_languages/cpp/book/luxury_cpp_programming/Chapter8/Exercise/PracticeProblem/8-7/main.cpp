// main.cpp
#include <iostream>
#include "ROM.h"
#include "RAM.h"
using namespace std;

int main() {
    char x[5] = {'h', 'e', 'l', 'l', 'o'};
    ROM biosROM(1024*10, x, 5);  // 10kB의 ROM 메모리. 배열 x로 초기화
    RAM mainMemory(1024*1024);  // 1MB의 RAM 메모리

    // 0 번지에서 4 번지까지 biosROM에서 읽어 mainMemory에 복사
    for(int i = 0; i < 5; i++) {
        mainMemory.write(i, biosROM.read(i));
    }
    
    // mainMemory의 값을 출력
    for(int i = 0; i < 5; i++) {
        cout << mainMemory.read(i);
    }
    cout << endl;

    return 0; // 프로그램 종료
}
