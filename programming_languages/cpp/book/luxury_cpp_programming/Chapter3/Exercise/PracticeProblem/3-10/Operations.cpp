#include "Operations.h"

// Operation 클래스의 setValue 멤버 함수 구현
void Operation::setValue(int x, int y) {
    a = x;
    b = y;
}

// Add 클래스의 calculate 멤버 함수 구현
int Add::calculate() {
    return a + b;  // Operation 클래스의 protected 멤버 변수 a와 b를 활용해서 a + b 리턴
}

// Sub 클래스의 calculate 멤버 함수 구현
int Sub::calculate() {
    return a - b;
}

// Mul 클래스의 calculate 멤버 함수 구현
int Mul::calculate() {
    return a * b;
}

// Div 클래스의 calculate 멤버 함수 구현
int Div::calculate() {
    if (b != 0) return a / b;
    return 0; // 나누는 수가 0일 경우, 결과로 0 반환
}
