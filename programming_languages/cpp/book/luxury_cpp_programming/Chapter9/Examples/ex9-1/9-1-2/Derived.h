// Derived.h
#ifndef DERIVED_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 시작
#define DERIVED_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 정의

#include "Base.h" // Base 클래스를 상속받기 위해 Base.h 파일을 포함

// Derived 클래스 정의: Base 클래스를 상속받음
class Derived : public Base {
public:
    // Derived 클래스의 멤버 함수 선언
    void f();
};

#endif // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 종료
