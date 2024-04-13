#include "Tower.h"

// Tower 클래스 구현부
// 위임 생성자 구현
Tower::Tower() : Tower(1) { }
// 타겟 생성자 구현
Tower::Tower(int h) {
    height = h;
}
// 객체의 높이값 반환하는 멤버 함수 구현
int Tower::getHeight() {
    return height;
}