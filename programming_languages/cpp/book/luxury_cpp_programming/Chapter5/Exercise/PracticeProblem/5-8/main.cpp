#include <iostream>
#include "MyIntStack.h"
using namespace std;

// main 함수 구현
int main() {
    MyIntStack a(10);
    a.push(10);
    a.push(20);
    MyIntStack b = a;  // 복사 생성
    b.push(30);

    int n;
    a.pop(n);  // 스택 a 팝
    cout << "스택 a에서 팝한 값" << n << endl;
    b.pop(n);  // 스택 b 팝
    cout << "스택 b에서 팝한 값" << n << endl;
}
