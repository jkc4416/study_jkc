#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
    Circle a(5), b(4);
    b = 1 + a;  // b의 반지름을 a의 반지름에 1을 더한 것으로 변경

    a.show();  // a의 상태 출력
    b.show();  // b의 상태 출력

    return 0;
}
