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
    cout << "kick=" << kick << ", " << "punch=" << punch << endl;
}

// 논리 부정 연산자 오버로딩
bool Power::operator!() {
    return kick == 0 && punch == 0;
}
