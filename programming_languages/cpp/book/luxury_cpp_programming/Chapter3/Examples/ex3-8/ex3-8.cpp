#include <iostream>
using namespace std;

// Circle 클래스 선언
class Circle {
    // public 접근 제어자를 가지는 멤버 변수 및 멤버 함수 선언
    public:
    int radius;  // 멤버 변수 선언
    Circle();  // 매개변수가 없는 기본 생성자 선언
    Circle(int r);  // 매개변수가 하나인 생성자 선언
    ~Circle();  // 소멸자 선언
    double getArea();  // 멤버 함수 선언
};

// 위임 생성자 구현
Circle::Circle() : Circle(1) { }
// 타겟 생성자 구현
Circle::Circle(int r) {
    radius = r;
    cout << "반지름 " << radius << "원 생성" << endl;
}
// 소멸자 구현
Circle::~Circle() {
    cout << "반지름 " << radius << "원 소멸" << endl;
}
// 멤버 함수 구현
double Circle::getArea() {
    return 3.14*radius*radius;
}

// 전역 객체 생성
Circle globalDonut(1000);
Circle globalPizza(2000);

// 지역 객체 생성
void f() {
    Circle fDonut(100);
    Circle fPizza(200);
}

// main 함수 정의
int main() {
    Circle mainDonut;
    Circle mainPizza(30);
    f();
}