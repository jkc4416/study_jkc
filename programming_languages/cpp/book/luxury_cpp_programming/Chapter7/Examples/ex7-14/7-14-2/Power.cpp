#include "Power.h"
#include <iostream>
using namespace std;

// 생성자 구현
Power::Power(int kick, int punch) {
    this->kick = kick;
    this->punch = punch;
}

// 객체 상태를 출력하는 멤버 함수
void Power::show() {
    cout << "kick=" << kick << ", punch=" << punch << endl;
}

// 연산자 오버로딩 구현: 왼쪽 시프트와 유사한 동작을 구현
Power& Power::operator<<(int n) {
    kick += n;
    punch += n;
    return *this;
}
