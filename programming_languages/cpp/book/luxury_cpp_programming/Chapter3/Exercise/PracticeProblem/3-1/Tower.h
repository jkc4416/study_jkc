#ifndef TOWER_H
#define TOWER_H

// Tower 클래스 선언부
class Tower {
// private 접근 제어자를 가지는 멤버 변수, 멤버 함수 선언
private:
    int height;   // 멤버 변수 선언
public:
    Tower();  // 기본 생성자 선언
    Tower(int a);  // 매개변수가 한 개인 생성자 선언
    int getHeight();  // 멤버 함수 선언
};

#endif
