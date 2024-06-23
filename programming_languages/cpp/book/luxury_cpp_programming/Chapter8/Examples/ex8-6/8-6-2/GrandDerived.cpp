#include "GrandDerived.h"

// GrandDerived 클래스의 setAB 멤버 함수 정의
void GrandDerived::setAB(int x) {
    // setA(x);  // 컴파일 에러. setA()는 private 속성으로 접근제어자가 변경되어 Base 클래스로부터 Derived 클래스에 상속되기 때문에 GrandDerived 클래스에서 접근 불가
    // showA();  // 컴파일 에러. showA()는 private 속성으로 접근제어자가 변경되어 Base 클래스로부터 Derived 클래스에 상속되기 때문에 GrandDerived 클래스에서 접근 불가
    setB(x);  // 정상 컴파일. setB()는 Derived 클래스의 protected 멤버이므로 파생클래스 GrandDerived에게 접근 허용
}
