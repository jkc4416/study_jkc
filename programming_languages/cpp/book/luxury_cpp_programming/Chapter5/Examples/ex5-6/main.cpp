/* 
참조에 의한 호출로 Circle 객체의 참조 전달
*/

#include <iostream>
#include "Circle.h"
using namespace std;

void increase(Circle &c) {  // c는 참조 매개 변수
    int r = c.getRadius();
    c.setRadius(r+1);
}

int main() {
    Circle waffle(30);
    increase(waffle);
    cout << waffle.getRadius() << endl;
}