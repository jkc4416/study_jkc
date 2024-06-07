#include "Power.h"
#include <iostream>
using namespace std;

// 생성자
Power::Power(int kick, int punch) {
    this->kick = kick;
    this->punch = punch;
}

// 상태 출력 함수
void Power::show() {
    cout << "kick=" << kick << ", punch=" << punch << endl;
}

// 후위 ++ 연산자 오버로딩
Power Power::operator++(int x) {
    Power temp = *this;  // 현재 객체의 상태를 임시 객체에 복사
    kick++;  // kick을 1 증가
    punch++;  // punch를 1 증가
    return temp;  // 변경 전 상태의 객체를 반환
}
