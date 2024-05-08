#include <iostream>
#include "MyIntStack.h"
using namespace std;

int main() {
    MyIntStack a;
    for (int i = 0; i < 11; i++) {  // 11개를 푸시 시도
        if (a.push(i))
            cout << i << ' ';  // 푸시 성공 시, 푸시된 값을 출력
        else
            cout << endl << i + 1 << " 번째 stack full" << endl;  // 푸시 실패 시, 메시지 출력
    }
    
    int n;
    for (int i = 0; i < 11; i++) {  // 11개를 팝 시도
        if (a.pop(n))
            cout << n << ' ';  // 팝 성공 시, 팝된 값을 출력
        else
            cout << endl << i + 1 << " 번째 stack empty";  // 팝 실패 시, 메시지 출력
    }
    cout << endl;
    return 0;
}
