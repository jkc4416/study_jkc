#include <iostream>
#include "Rect.h"
#include "RectManager.h"
using namespace std;

// main 함수: 프로그램의 진입점
int main() {
    Rect a(3, 4), b(4, 5), c(3, 4);
    RectManager man;

    if(man.equals(a, b)) {
        cout << "equal" << endl;
    } else {
        cout << "not equal" << endl;
    }
}
