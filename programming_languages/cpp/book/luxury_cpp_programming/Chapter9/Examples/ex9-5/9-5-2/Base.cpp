// Base.cpp
#include "Base.h" // Base 클래스의 선언을 포함하기 위해 Base.h 파일을 포함

// Base 클래스의 가상 소멸자 정의
Base::~Base() {
    cout << "~Base()" << endl; // "~Base()" 문자열을 출력
}
