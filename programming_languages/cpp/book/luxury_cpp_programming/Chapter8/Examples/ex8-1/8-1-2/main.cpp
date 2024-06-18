#include "Point.h"

int main() {
    Point p;  // 기본 클래스의 객체 생성
    ColorPoint cp;  // 파생 클래스의 객체 생성

    cp.set(3, 4);  // 기본 클래스의 멤버 호출, 좌표 설정
    cp.setColor("Red");  // 파생 클래스의 멤버 호출, 색상 설정
    cp.showColorPoint();  // 파생 클래스의 멤버 호출, 색상과 좌표 출력

    return 0;
}
