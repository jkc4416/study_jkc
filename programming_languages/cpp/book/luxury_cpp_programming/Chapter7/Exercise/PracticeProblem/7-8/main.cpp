#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
    Circle a(5), b(4);
    
    ++a;  // a의 반지름을 1 증가
    b = a++;  // a의 반지름을 1 증가시키고, 변경 전 값을 b에 할당

    a.show();  // a의 현재 상태 출력
    b.show();  // b의 현재 상태 출력

    return 0;
}
