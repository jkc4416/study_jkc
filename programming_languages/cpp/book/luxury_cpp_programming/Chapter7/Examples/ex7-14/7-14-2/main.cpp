#include <iostream>
#include "Power.h"
using namespace std;

int main() {
    Power a(1, 2);
    a << 3 << 5 << 6;  // a 객체에 3, 5, 6을 순서대로 더함
    a.show();  // 최종 결과 출력
    return 0;
}
