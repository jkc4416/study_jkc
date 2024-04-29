#include <iostream>
using namespace std;

// Circle 클래스 선언부
class Circle {
// private 접근 제어자를 가지는 멤버 변수 선언
private:
    int radius;
// public 접근 제어자를 가지는 생성자 및 멤버 함수 선언
public:
    Circle();
    Circle(int r);
    ~Circle();
    void setRadius(int r);
    double getArea();
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
    int radius;
    while(true) {
        cout << "정수 반지름 입력(음수이면 종료)>> ";
        cin >> radius;
        if (radius < 0) {
            break;
        }
        Circle *p = new Circle(radius);
        cout << "원의 면적은 " << p->getArea() << endl;
        delete p;
    }
}