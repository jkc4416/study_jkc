#include "Rect.h"
#include <iostream>
using namespace std;

int main() {
    Rect r[5] = { Rect(), Rect(2, 3), Rect(3, 4), Rect(4, 5), Rect(5, 6) };
    int tot_area = 0;
    for (Rect r_ : r) {
        tot_area += r_.getArea();
    }
    cout << "모든 사각형의 면적의 합은 " << tot_area << "입니다." << endl;
}