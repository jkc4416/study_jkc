// main.cpp
#include "Derived.h" // Derived 클래스의 선언을 포함하기 위해 Derived.h 파일을 포함

int main() {
    Derived d, *pDer; // Derived 객체 d와 Derived 타입 포인터 pDer 선언
    pDer = &d; // 포인터 pDer이 객체 d를 가리키도록 설정
    pDer->f(); // Derived의 멤버 함수 f() 호출, "Derived::f() called" 출력

    Base* pBase; // Base 타입 포인터 pBase 선언
    pBase = pDer; // 업캐스팅: pBase가 Derived 객체 d를 가리키도록 설정
    pBase->f(); // Base의 멤버 함수 f() 호출, "Base::f() called" 출력

    return 0; // 프로그램을 정상 종료
}
