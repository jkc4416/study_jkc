/* 
값에 의한 호출 시 매개 변수의 생성자가 실행되지 않음을 보여주는 예제
*/

#include <iostream>
#include "Circle.h"
using namespace std;

void increase(Circle c) {
    int r = c.getRadius();
    c.setRadius(r+1);
}

int main() {
    Circle waffle(30);
    increase(waffle);
    cout << waffle.getRadius() << endl;
}