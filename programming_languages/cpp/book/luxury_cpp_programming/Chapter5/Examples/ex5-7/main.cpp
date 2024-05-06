/* 
참조 매개 변수를 가진 함수 만들기 연습
*/

#include <iostream>
#include "Circle.h"
using namespace std;

void readRadius(Circle &c) {
    int r;
    cout << "정수 값으로 반지름을 입력하세요 >> ";
    cin >> r;  // 반지름 값 입력
    c.setRadius(r);
}

int main() {
    Circle donut;
    readRadius(donut);
    cout << "donut의 면적 = " << donut.getArea() << endl;
}