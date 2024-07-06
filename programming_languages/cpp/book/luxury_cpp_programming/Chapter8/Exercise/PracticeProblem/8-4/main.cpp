// main.cpp
#include "ColorPoint.h"

int main() {
    ColorPoint zeroPoint;  // BLACK 색에 (0, 0) 위치의 점
    zeroPoint.show();  // zeroPoint를 출력한다.

    ColorPoint cp(5, 5);
    cp.setPoint(10, 20);
    cp.setColor("BLUE");
    cp.show();  // cp를 출력한다.

    return 0; // 프로그램 종료
}
