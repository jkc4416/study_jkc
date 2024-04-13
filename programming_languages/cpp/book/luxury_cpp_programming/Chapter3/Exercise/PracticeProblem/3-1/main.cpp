#include <iostream>
#include "Tower.h"
using namespace std;

// main 함수 구현
int main() {
    Tower myTower;  // 매개변수가 없는 기본 생성자 호출을 통해 Tower 클래스의 인스턴스 생성
    Tower seoulTower(100);  // 매개변수가 한 개인 생성자 호출을 통해 Tower 클래스의 인스턴스 생성
    cout << "높이는 " << myTower.getHeight() << "미터" << endl;
    cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}