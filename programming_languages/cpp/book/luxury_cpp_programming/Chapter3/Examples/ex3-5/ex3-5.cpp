#include <iostream>
using namespace std;

// Point 클래스 선언부
class Point {
    
    int x, y;
    
    public:
    Point();
    Point(int a, int b);
    void show() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

// 위임 생성자 
Point::Point() : Point(0, 0) { }  // Point(int a, int b) 생성자 호출 -> a와 b에 모두 0 전달 -> private 멤버 변수 x와 y가 각각 0으로 설정됨
// 타겟 생성자
Point::Point(int a, int b) : x(a), y(b) { }  // x와 y에 a와 b를 각각 전달 -> private 멤버 변수 x와 y가 각각 a와 b로 설정됨

int main() {
    Point origin;  // 매개변수가 없는 기본 생성자 호출
    Point target(10, 20);  // 매개변수가 있는 생성자 호출
    origin.show();  // public 멤버 함수 접근 및 호출
    target.show();  // public 멤버 함수 접근 및 호출
}