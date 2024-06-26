#include <iostream>
using namespace std;

// Circle 클래스 선언부
class Circle {
// private 접근 제어자를 가지는 멤버 변수 선언
private:
    int radius;
// public 접근 제어자를 가지는 생성자 및 멤버 함수 선언
public:
    Circle();  // 매개변수가 없는 기본 생성자 선언
    Circle(int r);  // 매개변수가 있는 생성자 선언
    ~Circle();  // 소멸자 선언
    void setRadius(int r);  // 멤버 함수 선언
    double getArea();  // 멤버 함수 선언
};

// Circle 클래스 구현부
// 위임 생성자 구현
Circle::Circle() : Circle(1) { }
// 타겟 생성자 구현
Circle::Circle(int r) {
    radius = r;
    cout << "생성자 실행 radius = " << radius << endl;
}
// 소멸자 구현
Circle::~Circle() {
    cout << "소멸자 실행 radius = " << radius << endl;
}

// Circle 클래스의 setRadius 멤버 함수 구현
void Circle::setRadius(int r) {
    radius = r;
}
// Circle 클래스의 getArea 멤버 함수 구현
double Circle::getArea() {
    return 3.14*radius*radius;
}

// main 함수 정의
int main() {
    Circle *p, *q;
    p = new Circle;
    q = new Circle(30);
    cout << p->getArea() << endl << q->getArea() << endl;
    delete p;
    delete q;
}