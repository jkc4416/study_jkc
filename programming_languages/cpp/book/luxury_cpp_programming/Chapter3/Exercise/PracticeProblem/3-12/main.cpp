// main.cpp
#include "Ram.h"
#include <iostream>
using namespace std;

int main() {
    Ram ram;
    ram.write(100, 20);  // 100 번지에 20 저장
    ram.write(101, 30);  // 101 번지에 30 저장
    char res = ram.read(100) + ram.read(101);  // 100 번지와 101 번지의 값 더하기
    ram.write(102, res);  // 102 번지에 계산 결과 저장
    cout << "102 번지의 값 = " << (int)ram.read(102) << endl;  // 102 번지의 값 출력

    return 0;
}
