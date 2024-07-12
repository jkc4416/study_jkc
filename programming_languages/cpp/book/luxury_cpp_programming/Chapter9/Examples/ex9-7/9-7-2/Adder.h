// Adder.h
#ifndef ADDER_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 시작
#define ADDER_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 정의

#include "Calculator.h" // Calculator 클래스를 상속받기 위해 Calculator.h 파일 포함

// Adder 클래스 정의: Calculator 클래스를 상속받음
class Adder : public Calculator {
protected:
    int calc(int a, int b) override; // 두 정수의 합을 리턴하는 calc() 함수 선언 및 오버라이드 + virtual 지시자는 상속되므로 파생 클래스에서 오버라이드 할 땐 생략 가능
};

#endif // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 종료
