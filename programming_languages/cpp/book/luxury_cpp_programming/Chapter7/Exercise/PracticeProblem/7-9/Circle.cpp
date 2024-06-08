#include "Circle.h"

Circle::Circle(int radius) {
    this->radius = radius;
}

void Circle::show() {
    cout << "radius=" << radius << " 인 원" << endl;
}

// int 값과 Circle 객체의 덧셈을 처리하는 프렌드 함수 구현
Circle operator+(int n, const Circle& c) {
    return Circle(c.radius + n);  // 새 Circle 객체를 생성하여 반환
}
