#include <iostream>
#include "Rect.h"
using namespace std;

bool equals(Rect r, Rect s);  // 전방 참조 문제 해결을 위해 equals 함수를 전방 선언

// main 함수: 프로그램의 진입점
int main() {
    Rect a(3, 4), b(4, 5), c(3, 4);
    if(equals(a, b)) {
        cout << "equal" << endl;
    } else {
        cout << "not equal" << endl;
    }

    if(equals(a, c)) {
        cout << "equal" << endl;
    } else {
        cout << "not equal" << endl;
    }

    return 0;
}

bool equals(Rect r, Rect s) {
    if (r.width == s.width && r.height == s.height) {
        return true;
    } else {
        return false;
    }
}
