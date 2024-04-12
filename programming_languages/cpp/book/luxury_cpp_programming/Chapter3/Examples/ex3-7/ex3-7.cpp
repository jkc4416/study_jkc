#include <iostream>
using namespace std;

// Circle 클래스 선언
class Circle {
    public:
    int radius;  // 멤버 변수
    Circle();  // 매개변수가 없는 기본 생성자
    Circle(int r);  // 매개변수가 하나인 생성자
    ~Circle();  // 소멸자
    double getArea();
};

// Circle 클래스 구현
// 매개변수가 없는 기본 생성자 구현
Circle::Circle() : Circle(1) { }
// 매개변수가 하나인 생성자 구현
Circle::Circle(int r) {
    radius = r;
    cout << "반지름 " << radius << " 원 생성" << endl;
}
// 소멸자 구현 (객체가 생성된 순서 반대로 객체가 소멸됨)
Circle::~Circle() {
    cout << "반지름 " << radius << " 원 소멸" << endl;
}
// getArea() 멤버 함수 구현
double Circle::getArea() {
    return 3.14*radius*radius;
}

// main 함수 구현
int main() {
    Circle donut;
    Circle pizza(30);
    return 0;
}
