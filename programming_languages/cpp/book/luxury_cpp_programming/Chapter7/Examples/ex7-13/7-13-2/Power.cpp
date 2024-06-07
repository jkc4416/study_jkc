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

// 전위 ++ 연산자 구현
Power& operator++(Power& op) {
    op.kick++;
    op.punch++;
    return op;
}

// 후위 ++ 연산자 구현
Power operator++(Power& op, int) {
    Power tmp = op;
    op.kick++;
    op.punch++;
    return tmp;
}
