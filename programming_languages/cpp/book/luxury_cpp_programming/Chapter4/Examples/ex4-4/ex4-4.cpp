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
    Circle(int r);  // 매개변수가 하나인 생성자 선언
    void setRadius(int r);  // 멤버 함수 선언
    double getArea();  // 멤버 함수 선언
};

// Circle 클래스 구현부
// 위임 생성자 구현
Circle::Circle() : Circle(1) { }
// 타겟 생성자 구현
Circle::Circle(int r) {
    radius = r;
}
// setRadius 멤버 함수 구현
void Circle::setRadius(int r) {
    radius = r;
}
// getArea 멤버 함수 구현
double Circle::getArea() {
    return 3.14*radius*radius;
}

// main() 함수 구현
int main() {
    Circle circles[2][3];  // Circle 객체 배열 생성

    circles[0][0].setRadius(1);
    circles[0][1].setRadius(2);
    circles[0][2].setRadius(3);
    circles[1][0].setRadius(4);
    circles[1][1].setRadius(5);
    circles[1][2].setRadius(6);

    for(int i=0; i<2; i++) {
        for(int j=0; j<3; j++) {
            cout << "Circle [" << i << ", " << j << "]의 면적은 ";
            cout << circles[i][j].getArea() << endl;
        }
    }
}