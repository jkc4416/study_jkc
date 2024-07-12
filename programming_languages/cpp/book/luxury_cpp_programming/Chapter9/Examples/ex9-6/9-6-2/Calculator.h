// Calculator.h
#ifndef CALCULATOR_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 시작
#define CALCULATOR_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 정의

// Calculator 추상 클래스 정의
class Calculator {
public:
    virtual int add(int a, int b) = 0; // 두 정수의 합 리턴
    virtual int subtract(int a, int b) = 0; // 두 정수의 차 리턴
    virtual double average(int a[], int size) = 0; // 배열 a의 평균 리턴 (size는 배열의 크기)
};

#endif // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 종료
