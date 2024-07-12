// main.cpp
#include "Derived.h" // Derived 클래스의 선언을 포함하기 위해 Derived.h 파일을 포함

int main() {
    Derived *dp = new Derived(); // Derived 객체를 동적으로 생성하고 포인터 dp로 가리킴
    Base *bp = new Derived(); // Derived 객체를 동적으로 생성하고 Base 클래스의 포인터 bp로 가리킴

    delete dp; // dp 포인터로 가리키는 Derived 객체 소멸, Derived 소멸자와 Base 소멸자 호출
    delete bp; // bp 포인터로 가리키는 Derived 객체 소멸, Base 소멸자가 가상 함수이므로 Derived 소멸자와 Base 소멸자 모두 호출

    return 0; // 프로그램을 정상 종료
}
