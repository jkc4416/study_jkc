#include "Base.h"

// Base 클래스의 setA 멤버 함수 정의
void Base::setA(int a) {
    this->a = a;  // private 멤버 변수 a를 매개변수 a로 설정
}

// Base 클래스의 showA 멤버 함수 정의
void Base::showA() {
    cout << a << endl;  // private 멤버 변수 a의 값을 출력
}
