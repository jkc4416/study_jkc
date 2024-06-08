#include "Stack.h"
using namespace std;

int main() {
    Stack stack;
    stack << 3 << 5 << 10;  // 3, 5, 10을 순서대로 스택에 푸시

    while (true) {
        if (!stack) {  // 스택이 비어 있으면 루프 탈출
            break;
        }
        int x;
        stack >> x;  // 스택에서 정수 팝
        cout << x << ' ';
    }
    cout << endl;

    return 0;
}
