// main.cpp
#include "GrandDerived.h" // GrandDerived 클래스의 선언을 포함하기 위해 GrandDerived.h 파일을 포함

int main() {
    GrandDerived g; // GrandDerived 객체 g 선언
    Base *bp; // Base 클래스의 포인터 bp 선언
    Derived *dp; // Derived 클래스의 포인터 dp 선언
    GrandDerived *gp; // GrandDerived 클래스의 포인터 gp 선언

    bp = dp = gp = &g; // 모든 포인터가 객체 g를 가리키도록 설정

    bp->f(); // Base의 멤버 f() 호출 -> 동적 바인딩에 의해 GrandDerived의 멤버 f() 호출 (오버라이딩)
    dp->f(); // Derived의 멤버 f() 호출 -> 동적 바인딩에 의해 GrandDerived의 멤버 f() 호출 (오버라이딩)
    gp->f(); // GrandDerived의 멤버 f() 호출

    return 0; // 프로그램을 정상 종료
}
