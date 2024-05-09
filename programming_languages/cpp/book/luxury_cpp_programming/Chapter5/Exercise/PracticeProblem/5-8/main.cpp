#include <iostream>
#include "MyIntStack.h"
using namespace std;

int main() {
    MyIntStack a(10); // 최대 10개의 정수를 저장할 수 있는 스택 생성
    a.push(10);  // 스택 a에 10 푸시
    a.push(20);  // 스택 a에 20 푸시
    MyIntStack b = a;  // 복사 생성자를 통한 객체 복사
    b.push(30);  // 스택 b에 30 푸시

    int n;
    a.pop(n);  // 스택 a에서 하나의 값 팝
    cout << "스택 a에서 팝한 값: " << n << endl;
    b.pop(n);  // 스택 b에서 하나의 값 팝
    cout << "스택 b에서 팝한 값: " << n << endl;
    return 0;
}
