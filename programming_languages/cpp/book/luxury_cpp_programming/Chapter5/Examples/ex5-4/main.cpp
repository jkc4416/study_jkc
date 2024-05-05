#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
    Circle circle; 
    Circle &refc = circle; // circle 객체에 대한 참조변수 refc 선언
    refc.setRadius(10);  // 참조변수 refc의 반지름 설정 = 원본인 circle의 반지름 설정
    cout << refc.getArea() << " " << circle.getArea() << endl;  // 두 호출은 동일 객체에 대한 호출
}