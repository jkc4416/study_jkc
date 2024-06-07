#include <iostream>
#include "Power.h"
using namespace std;

int main() {
    Power a(3, 5), b;
    cout << "Initial values:" << endl;
    a.show();  // 초기 값 출력: a
    b.show();  // 초기 값 출력: b (기본값)

    b = 2 + a;  // 정수와 객체를 더하는 연산
    cout << "After adding 2 to a:" << endl;
    a.show();  // a의 상태 출력 (변화 없음)
    b.show();  // b의 상태 출력 (변화된 상태)

    return 0;
}
