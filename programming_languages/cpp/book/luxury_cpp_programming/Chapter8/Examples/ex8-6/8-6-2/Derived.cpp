#include "Derived.h"

// Derived 클래스의 setB 멤버 함수 정의
void Derived::setB(int b) {
    this->b = b;  // private 멤버 변수 b를 매개변수 b로 설정
}

// Derived 클래스의 showB 멤버 함수 정의
void Derived::showB() {
    setA(5);  // 정상 컴파일. setA()는 Base 클래스의 protected 멤버이기 때문에 Base 클래스의 파생클래스인 Derived 클래스 내부에서 접근 가능
    showA();  // 정상 컴파일. showA()는 Base 클래스의 public 멤버이기 때문에 Base 클래스의 파생클래스인 Derived 클래스 내부에서 접근 가능
    cout << b << endl;  // private 멤버 b의 값을 출력
}
