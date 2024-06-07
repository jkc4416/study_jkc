#include <iostream>
#include "Power.h"
using namespace std;

int main() {
    Power a(3, 5), b;
    cout << "Initial values:\n";
    a.show();
    b.show();

    cout << "After applying ++a:\n";
    b = ++a;  // a 객체에 전위 ++ 연산을 적용하고 결과를 b에 할당
    a.show();  // 수정된 a 객체 출력
    b.show();  // b 객체 출력, b는 a의 수정된 값을 가지므로 동일한 출력이 됨

    return 0;
}
