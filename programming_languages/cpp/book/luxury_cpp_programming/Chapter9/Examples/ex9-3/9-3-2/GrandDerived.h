// GrandDerived.h
#ifndef GRANDDERIVED_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 시작
#define GRANDDERIVED_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 정의

#include "Derived.h" // Derived 클래스를 상속받기 위해 Derived.h 파일을 포함

// GrandDerived 클래스 정의: Derived 클래스를 상속받음
class GrandDerived : public Derived {
public:
    void f() override; // 가상 함수 f() 선언, override 키워드를 사용하여 명시적으로 오버라이딩함을 표시
};

#endif // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 종료
