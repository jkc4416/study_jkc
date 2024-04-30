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
// Circle 클래스의 setRadius 멤버 함수 정의
void Circle::setRadius(int r) {
    radius = r;
}
// Circle 클래스의 getArea 멤버 함수 정의
double Circle::getArea() {
    return 3.14*radius*radius;
}

// main() 함수 정의
int main() {
    Circle *pArray = new Circle [3];  // 객체 배열의 동적 생성
    pArray[0].setRadius(10);
    pArray[1].setRadius(20);
    pArray[2].setRadius(30);

    for(int i=0; i<3; i++) {
        cout << pArray[i].getArea() << endl;
    }

    Circle *p = pArray;  // Circle 객체를 가리키는 포인터 변수 p에 배열의 주소값 설정
    for(int i=0; i<3; i++) {
        cout << p->getArea() << endl;
        p++;  // 다음 원소의 주소로 증가
    }

    delete [] pArray;  // 객체 배열 반환
}
