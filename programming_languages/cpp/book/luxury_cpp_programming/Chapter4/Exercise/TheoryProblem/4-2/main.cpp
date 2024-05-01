#include "Rect.h"
#include <iostream>
using namespace std;

int main() {
    Rect* q;
    int w, h;
    cout << "사각형의 폭과 높이를 차례대로 입력하세요 >> ";
    cin >> w >> h;  // 사용자로부터 사각형의 폭과 높이를 w, h에 각각 입력받는다.
    q = new Rect(w, h);
    cout << "사각형의 면적은 " << q->getArea() << "입니다." << endl;
    delete q;
}