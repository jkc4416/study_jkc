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

// 친구 함수 구현. 정수값을 Power 객체에 더하는 기능
Power operator+(int op1, Power op2) {
    Power tmp;
    tmp.kick = op1 + op2.kick;
    tmp.punch = op1 + op2.punch;
    return tmp;
}
