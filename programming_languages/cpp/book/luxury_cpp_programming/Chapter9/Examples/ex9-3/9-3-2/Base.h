// Base.h
#ifndef BASE_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 시작
#define BASE_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 정의

#include <iostream> // 표준 입출력 스트림을 사용하기 위해 포함

using namespace std; // std 네임스페이스를 사용

// Base 클래스 정의
class Base {
public:
    virtual void f(); // 가상 함수 f() 선언
};

#endif // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 종료
