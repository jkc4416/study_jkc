#include "Power.h"
#include <iostream>
using namespace std;

// 생성자 구현
Power::Power(int kick, int punch) {
    this->kick = kick;
    this->punch = punch;
}

// 멤버 함수 show 구현
void Power::show() {
    cout << "kick=" << kick << ", " << "punch=" << punch << endl;
}

// 전위 ++ 연산자 오버로딩
Power& Power::operator++() {
    ++kick;  // kick 값을 1 증가
    ++punch;  // punch 값을 1 증가
    return *this;  // 현재 객체의 참조를 반환
}
