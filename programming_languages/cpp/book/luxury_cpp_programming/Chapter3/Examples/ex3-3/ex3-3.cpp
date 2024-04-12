#include <iostream>
using namespace std;

// Circle 클래스 선언부
class Circle {
    public:
    int radius;
    Circle();  // 기본 생성자
    Circle(int r);  // 매개변수가 있는 생성자
    double getArea();
};

// Circle 클래스 구현부
Circle::Circle() {
    radius = 1;  // 반지름 값 초기화
    cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r) {
    radius = r;  // 반지름 값 초기화
    cout << "반지름 " << radius << " 원 생성" << endl;    
}

double Circle::getArea() {
    return 3.14*radius*radius;
}

int main() {
    Circle donut;
    double area = donut.getArea();
    cout << "donut 면적은 " << area << endl;

    Circle pizza(30);
    area = pizza.getArea();
    cout << "pizza 면적은 " << area << endl;
}