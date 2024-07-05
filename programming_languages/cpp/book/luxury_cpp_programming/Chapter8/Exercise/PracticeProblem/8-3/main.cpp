// main.cpp
#include "ColorPoint.h"

int main() {
    // ColorPoint 객체 생성: 좌표 (3, 5)와 색상 "RED"로 초기화
    ColorPoint cp(3, 5, "RED");
    
    // 좌표를 (10, 20)으로 설정
    cp.setPoint(10, 20);
    
    // 색상을 "BLUE"로 변경
    cp.setColor("BLUE");
    
    // 점의 정보를 출력
    cp.show();

    return 0; // 프로그램 종료
}
