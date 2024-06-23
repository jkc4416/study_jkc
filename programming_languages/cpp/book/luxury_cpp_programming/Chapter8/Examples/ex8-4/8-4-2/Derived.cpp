#include "Derived.h"

// Derived 클래스의 setB 멤버 함수 정의
void Derived::setB(int b) {
    this->b = b;  // private 멤버 변수 b를 매개변수 b로 설정
}

// Derived 클래스의 showB 멤버 함수 정의
void Derived::showB() {
    cout << b << endl;  // private 멤버 변수 b의 값을 출력
}
