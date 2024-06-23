// Calculator.cpp
#include "Calculator.h"

// calc 함수 정의: 주어진 연산자를 사용하여 두 정수를 계산
int Calculator::calc(char op, int a, int b) {
    int res = 0; // 결과를 저장할 변수
    switch(op) {
        case '+':
            res = add(a, b); // Adder 클래스의 add() 함수 호출
            break;
        case '-':
            res = minus(a, b); // Subtractor 클래스의 minus() 함수 호출
            break;
        default:
            // 잘못된 연산자 입력 시 처리할 코드 (여기서는 아무 작업도 하지 않음)
            break;
    }
    return res; // 계산 결과 반환
}
