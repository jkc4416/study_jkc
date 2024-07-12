// Calculator.cpp
#include "Calculator.h" // Calculator 클래스의 선언을 포함하기 위해 Calculator.h 파일 포함

// 두 정수를 입력받는 private 멤버 함수 정의
void Calculator::input() {
    cout << "정수 2개를 입력하세요>> ";
    cin >> a >> b;
}

// 입력을 받고 계산 결과를 출력하는 public 멤버 함수 정의
void Calculator::run() {
    input(); // 두 정수를 입력받음
    cout << "계산된 값은 " << calc(a, b) << endl; // 계산 결과를 출력
}
