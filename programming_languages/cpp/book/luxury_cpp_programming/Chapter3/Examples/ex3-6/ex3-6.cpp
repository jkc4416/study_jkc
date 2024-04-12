#include <iostream>
using namespace std;

// Rectangle 클래스 선언
class Rectangle {
    public:  // public 접근 제어자를 가지는 멤버 변수 및 멤버 함수 선언
    int width, height;  // 멤버 변수
    Rectangle();  // 기본 생성자
    Rectangle(int w, int h);  // 매개변수가 두 개인 생성자
    Rectangle(int length);  // 매개변수가 한 개인 생성자
    bool isSquare();  // 멤버 함수
};

// Rectangle 클래스 구현
// 기본 생성자 구현
Rectangle::Rectangle() : Rectangle(1) { }
// 매개변수가 두 개인 생성자 구현
Rectangle::Rectangle(int w, int h) {
    width = w;
    height = h;
}
// 매개변수가 한 개인 생성자 구현
Rectangle::Rectangle(int length) {
    width = height = length;
}
// 멤버 함수 구현
bool Rectangle::isSquare() {
    if(width == height) {
        return true;
    } else {
        return false;
    }
}

// main 함수 구현
int main() {
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3);

    if (rect1.isSquare()) {
        cout << "rect1은 정사각형이다." << endl;
    }
    
    if (rect2.isSquare()) {
        cout << "rect2은 정사각형이다." << endl;
    }

    if (rect3.isSquare()) {
        cout << "rect3은 정사각형이다." << endl;
    }
}