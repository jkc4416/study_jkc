#include "GrandDerived.h"

int main() {
    Base a;  // Base 클래스 객체 생성
    a.showA();
    
    Derived x;  // Derived 클래스 객체 생성

    // 다음 줄의 코드들은 모두 컴파일 오류 발생
    // x.a = 5;  // private 멤버 a에 접근 불가
    // x.setA(10);  // private 상속으로 인해 setA()에 접근 불가
    // x.showA();  // private 상속으로 인해 showA()에 접근 불가

    // x.b = 10;  // private 멤버 b에 접근 불가
    // x.setB(10);  // protected 멤버 함수 setB()에 접근 불가

    x.showB();  // public 멤버 함수 showB() 호출, 출력 가능

    GrandDerived y;  // GrandDerived 클래스 객체 생성
    // y.setAB(10);  // 컴파일 오류. setAB()는 protected 멤버 함수이므로 main()에서 접근 불가

    return 0;  // 프로그램 종료
}
