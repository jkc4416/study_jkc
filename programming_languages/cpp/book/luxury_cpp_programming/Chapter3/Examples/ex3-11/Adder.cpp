#include "Adder.h"

// Adder 클래스 구현부
// 매개변수가 두 개인 생성자 구현
Adder::Adder(int a, int b) {
    op1 = a;
    op2 = b;
}

// 멤버 함수 구현
int Adder::process() {
    return op1 + op2;
}
