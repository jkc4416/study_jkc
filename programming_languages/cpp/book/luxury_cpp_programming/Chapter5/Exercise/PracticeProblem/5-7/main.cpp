#include <iostream>
#include "MyIntStack.h"
using namespace std;

int main() {
    MyIntStack a;
    for (int i = 0; i < 11; i++) {  // 11개를 푸시 시도
        if (a.push(i))  // for loop를 돌면서 0부터 9까지 숫자를 push (스택이 꽉 차지 않은 경우 a.push(i)는 true를, 꽉 찬 경우에는 false를 반환)
            cout << i << ' ';  // 푸시 성공 시, 푸시된 값을 출력
        else
            cout << endl << i + 1 << " 번째 stack full" << endl;  // 푸시 실패 시, 메시지 출력
    }
    
    int n;
    for (int i = 0; i < 11; i++) {  // 11개를 팝 시도
        if (a.pop(n))  // for loop를 돌면서 가장 나중에 저장된 값부터 pop (스택이 빈 경우 a.pop(n)는 false를, 꽉 비어있지 않은 경우에는 false를 반환
            cout << n << ' ';  // 팝 성공 시, 팝된 값을 출력
        else
            cout << endl << i + 1 << " 번째 stack empty";  // 팝 실패 시, 메시지 출력
    }
    cout << endl;
    return 0;
}
