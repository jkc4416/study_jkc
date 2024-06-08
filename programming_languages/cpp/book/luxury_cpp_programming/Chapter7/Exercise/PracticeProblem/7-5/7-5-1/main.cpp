#include "Color.h"

int main() {
    Color red(255, 0, 0), blue(0, 0, 255), c;
    c = red + blue;
    c.show();  // 색 값 출력

    Color fuchsia(255, 0, 255);
    if (c == fuchsia) {
        cout << "보라색 맞음" << endl;
    } else {
        cout << "보라색 아님" << endl;
    }
}