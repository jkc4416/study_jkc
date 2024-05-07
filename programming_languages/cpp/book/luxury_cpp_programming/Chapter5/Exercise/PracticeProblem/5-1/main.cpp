#include <iostream>
#include "Circle.h"

using namespace std;  // 표준 네임스페이스 사용

int main() {
    Circle c1(10), c2(20);  // 두 Circle 객체 생성

    cout << "Before swap:" << endl;
    cout << "c1 radius: " << c1.getRadius() << endl;  // 교환 전 c1의 반지름 출력
    cout << "c2 radius: " << c2.getRadius() << endl;  // 교환 전 c2의 반지름 출력

    swap(c1, c2);  // c1과 c2의 데이터 교환

    cout << "After swap:" << endl;
    cout << "c1 radius: " << c1.getRadius() << endl;  // 교환 후 c1의 반지름 출력
    cout << "c2 radius: " << c2.getRadius() << endl;  // 교환 후 c2의 반지름 출력

    return 0;
}
