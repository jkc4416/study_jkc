// Circle.cpp
#include "Circle.h" // Circle 클래스의 선언을 포함하기 위해 Circle.h 파일을 포함

// Circle 클래스의 멤버 함수 draw() 정의
void Circle::draw() {
    Shape::draw(); // 기본 클래스의 draw() 호출
    cout << "Circle" << endl; // "Circle" 문자열을 출력
}
