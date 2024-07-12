// Calculator.h
#ifndef CALCULATOR_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 시작
#define CALCULATOR_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 정의

#include <iostream> // 표준 입출력 스트림을 사용하기 위해 포함
using namespace std; // std 네임스페이스를 사용

// Calculator 추상 클래스 정의
class Calculator {
private:
    void input(); // 두 정수를 입력받는 private 멤버 함수 선언

protected:
    int a, b; // 두 정수를 저장할 protected 멤버 변수
    virtual int calc(int a, int b) = 0; // 두 정수를 계산하는 순수 가상 함수 선언

public:
    void run(); // 입력을 받고 계산 결과를 출력하는 public 멤버 함수 선언
};

#endif // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 종료
