#include "Circle.h"

// 생성자 구현: 인자로 받은 값을 radius 멤버 변수에 할당
Circle::Circle(int radius) {
    this->radius = radius;
}

// 원의 정보를 출력하는 멤버 함수 구현
void Circle::show() {
    cout << "radius=" << radius << " 인 원" << endl;
}

// 전위 증가 연산자 프렌드 함수 구현
Circle& operator++(Circle& c) {
    c.radius += 1;  // 반지름을 1 증가
    return c;  // 변경된 객체의 참조를 리턴
}

// 후위 증가 연산자 프렌드 함수 구현
Circle operator++(Circle& c, int) {
    Circle temp = c;  // 현재 상태를 임시 객체에 복사
    c.radius += 1;  // 반지름을 1 증가
    return temp;  // 증가 전 상태의 객체를 리턴
}
