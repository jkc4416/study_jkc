// GoodCalc.h
#ifndef GOODCALC_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 시작
#define GOODCALC_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 정의

#include "Calculator.h" // Calculator 클래스를 상속받기 위해 Calculator.h 파일 포함

// GoodCalc 클래스 정의: Calculator 클래스를 상속받음
class GoodCalc : public Calculator {
public:
    int add(int a, int b); // 두 정수의 합 리턴
    int subtract(int a, int b); // 두 정수의 차 리턴
    double average(int a[], int size); // 배열 a의 평균 리턴 (size는 배열의 크기)
};

#endif // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 종료
