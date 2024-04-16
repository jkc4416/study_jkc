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
    Circle(int r);  // int 타입 매개변수가 한 개 있는 생성자 선언
    void setRadius(int r);
    double getArea();
};

// Circle 클래스 구현부
// 위임 클래스 구현
Circle::Circle() : Circle(1) { };
// 타겟 클래스 구현
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

// main 함수 정의
int main() {
    Circle circleArray[3];  // Circle 객체 배열 생성 (배열 안에 Circle 객체가 세 개 담겨있음)

    // 배열의 각 원소 객체의 멤버 접근
    circleArray[0].setRadius(10);
    circleArray[1].setRadius(20);
    circleArray[2].setRadius(30);

    for (int i=0; i<3; i++) {
        cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl; 
    }

    // 객체 배열에 대한 포인터 선언
    Circle *p;
    p = circleArray;  // 포인터 변수 p에 circleArray 객체 배열의 첫 번째 객체의 주소를 먼저 할당
    for(int i=0; i<3; i++) {
        cout << "Circle " << i << "의 면적은 " << p->getArea() << endl;
        p++;  // 포인터가 가리키는 주소를 circleArray 객체 배열의 다음 객체 주소로 변경
    }
}