// Calculator.h
#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "Adder.h"
#include "Subtractor.h"

// Calculator 클래스 정의: Adder와 Subtractor 클래스의 기능을 상속받음
class Calculator : public Adder, public Subtractor {
public:
    // 연산자를 사용하여 두 정수를 계산하는 함수
    int calc(char op, int a, int b);
};

#endif
