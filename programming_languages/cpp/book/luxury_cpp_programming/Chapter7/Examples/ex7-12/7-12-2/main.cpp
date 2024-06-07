#include <iostream>
#include "Power.h"
using namespace std;

int main() {
    Power a(3, 5), b(4, 6), c;
    c = a + b;  // 파워 객체간 덧셈 연산
    cout << "Displaying power of a, b, and c:" << endl;
    a.show();  // a의 파워 출력
    b.show();  // b의 파워 출력
    c.show();  // c의 파워 출력 (a와 b의 합)
    return 0;
}
