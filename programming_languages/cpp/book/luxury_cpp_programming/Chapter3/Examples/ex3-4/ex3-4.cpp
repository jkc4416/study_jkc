#include <iostream>
using namespace std;

// Circle 클래스 선언부
class Circle {
    public:
    int radius;
    Circle();
    Circle(int r);
    double getArea();
};

// Circle 클래스 구현부
Circle::Circle() : Circle(1) { }  // 위임 생성자 (타겟 생성자에 객체 초기화를 전담시키는 생성자)

Circle::Circle(int r) {  // 타겟 생성자 (객체 초기화를 전담하는 생성자)
    radius = r;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

double Circle::getArea() {
    return 3.14*radius*radius;
}

int main() {
    Circle donut;
    double area = donut.getArea();
    cout << "donut 면적은 " << area << "입니다." << endl;

    Circle pizza(30);
    area = pizza.getArea();
    cout << "pizza 면적은 " << area << "입니다." << endl;
}