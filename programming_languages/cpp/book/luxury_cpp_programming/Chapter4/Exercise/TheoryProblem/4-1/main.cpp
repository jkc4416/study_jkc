#include "Rect.h"
#include <iostream>
using namespace std;

int main() {
    Rect r(2, 3);
    Rect* p = &r;

    cout << "정의된 사각형의 폭은 " << p->getWidth() << "입니다." <<endl;
    cout << "정의된 사각형의 폭은 " << p->getHeight() << "입니다." <<endl;
}