#include <iostream>
#include "Circle.h"  // Circle 선언부를 Circle.h 파일에 분리하였기 때문에 Circle 클래스를 활용하는 모든 코드에서 Circle.h를 include 해야함
using namespace std;

// Circle 클래스 구현부
// 위임 생성자 구현
Circle::Circle() : Circle(1) { }
// 타겟 생성자 구현
Circle::Circle(int r) {
    radius = r;
    cout << "반지름 " << radius;
    cout << " 원 생성" << endl;
}
// 멤버 함수 구현
double Circle::getArea() {
    return 3.14*radius*radius;
}