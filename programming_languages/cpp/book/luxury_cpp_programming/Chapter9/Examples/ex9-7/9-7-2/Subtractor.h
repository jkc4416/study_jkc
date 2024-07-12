// Subtractor.h
#ifndef SUBTRACTOR_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 시작
#define SUBTRACTOR_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 정의

#include "Calculator.h" // Calculator 클래스를 상속받기 위해 Calculator.h 파일 포함

// Subtractor 클래스 정의: Calculator 클래스를 상속받음
class Subtractor : public Calculator {
protected:
    int calc(int a, int b) override; // 두 정수의 차를 리턴하는 calc() 함수 선언 및 오버라이드
};

#endif // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 종료
