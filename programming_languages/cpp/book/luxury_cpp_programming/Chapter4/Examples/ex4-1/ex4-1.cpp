#include <iostream>
using namespace std;

// Circle 클래스 선언부
class Circle {
// private 접근 제어자를 가지는 멤버 변수 선언
private:
    int radius;
// public 접근 제어자를 가지는 생성자 및 멤버 함수 선언
public:
    Circle();  // 매개변수가 하나도 없는 기본 생성자
    Circle(int r);  // int 타입 매개변수 하나를 가지는 생성자
    double getArea();  // 멤버 함수
};

// Circle 클래스 구현부
// 위임 생성자 구현
Circle::Circle() : Circle(1) { }  
// 타겟 생성자 구현
Circle::Circle(int r) {
    radius = r;
}
// 멤버 함수 구현
double Circle::getArea() {
    return 3.14*radius*radius;
}


// main() 함수 구현
int main() {
    Circle donut;
    Circle pizza(30);

    // 객체 이름으로 멤버 접근
    cout << donut.getArea() << endl;

    // 객체 포인터로 멤버 접근
    Circle *p;  // Circle 타입 포인터 선언
    p = &donut;  // Circle 클래스로 생성한 donut 객체의 주소를 Circle 타입의 포인터에 저장
    cout << p->getArea() << endl;  // 객체 포인터를 사용해서 멤버 함수 사용
    cout << (*p).getArea() << endl;  // 간접참조연산자를 통해 Circle 타입 포인터 p가 가리키는 객체의 멤버 함수에 점 연산자로 접근

    p = &pizza;
    cout << p->getArea() << endl;  // 객체 포인터를 사용해서 멤버 함수 사용
    cout << (*p).getArea() << endl;  // 간접참조연산자를 통해 Circle 타입 포인터 p가 가리키는 객체의 멤버 함수에 점 연산자로 접근    
}