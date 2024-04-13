#include <iostream>
#include "Calculator.h"
#include "Adder.h"
using namespace std;

// Calculator 클래스 구현부
// 멤버 함수 구현
void Calculator::run() {
    cout << "두 개의 수를 입력하세요>>";
    int a, b;
    cin >> a >> b;

    Adder adder(a, b);
    cout << adder.process() << endl;
}


