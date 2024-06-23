// main.cpp
#include <iostream>
#include "Calculator.h"

using namespace std;

int main() {
    Calculator handCalculator; // Calculator 객체 생성

    // 두 정수를 더한 결과 출력
    cout << "2 + 4 = " << handCalculator.calc('+', 2, 4) << endl;
    // 두 정수를 뺀 결과 출력
    cout << "100 - 8 = " << handCalculator.calc('-', 100, 8) << endl;

    return 0; // 프로그램 종료
}
