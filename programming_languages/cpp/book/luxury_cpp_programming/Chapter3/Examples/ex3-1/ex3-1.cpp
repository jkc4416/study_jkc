#include <iostream>
using namespace std;

// Circle 클래스 선언부
class Circle {  
    public:
    int radius;
    double getArea();
};

// Circle 클래스 구현부
double Circle::getArea() {
    return 3.14*radius*radius;
}

int main() {
    Circle donut;
    donut.radius = 1;  // donut 객체의 반지름을 1로 설정
    double area = donut.getArea();  // donut 객체의 면적 계산
    cout << "donut의 면적은 " << area << "입니다." << endl;

    Circle pizza;
    pizza.radius = 30;
    area = pizza.getArea();
    cout << "pizza의 면적은 " << area << "입니다." << endl;
}