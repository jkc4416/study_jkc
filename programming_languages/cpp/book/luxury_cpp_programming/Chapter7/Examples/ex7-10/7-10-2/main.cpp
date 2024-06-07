#include <iostream>
#include "Power.h"
using namespace std;

int main() {
    Power a(3, 5), b;
    cout << "Initial values:" << endl;
    a.show();
    b.show();
    
    b = a++;  // 후위 ++ 연산자를 사용하여 a를 증가시키고 b에 이전 값을 할당
    cout << "After using a++:" << endl;
    a.show();  // a의 상태 출력 (증가된 상태)
    b.show();  // b의 상태 출력 (증가 전 상태)

    return 0;
}
