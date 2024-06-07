#include <iostream>
#include "Power.h"
using namespace std;

int main() {
    Power a(3, 5), b;
    b = ++a;  // 전위 증가 연산자 사용
    cout << "After prefix ++:" << endl;
    a.show();  // a 출력
    b.show();  // b 출력

    b = a++;  // 후위 증가 연산자 사용
    cout << "After postfix ++:" << endl;
    a.show();  // a 출력
    b.show();  // b 출력
    return 0;
}
