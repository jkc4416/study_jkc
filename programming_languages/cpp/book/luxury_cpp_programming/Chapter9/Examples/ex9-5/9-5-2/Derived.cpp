// Derived.cpp
#include "Derived.h" // Derived 클래스의 선언을 포함하기 위해 Derived.h 파일을 포함

// Derived 클래스의 가상 소멸자 정의
Derived::~Derived() {
    cout << "~Derived()" << endl; // "~Derived()" 문자열을 출력
}
