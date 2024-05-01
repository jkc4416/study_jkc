// 필요한 헤더 파일 및 Color 클래스 헤더 포함
#include "Color.h"
#include <iostream>
using namespace std;

// Color 클래스의 구현부
// Color 클래스 기본 생성자 구현
Color::Color() {
    c = "white";  // 멤버 변수 c를 "white"로 초기화
    cout << "기본생성자" << endl;  // 생성자가 호출됨을 사용자에게 알리는 메시지 출력
}
// string 객체를 매개변수로 받는 생성자 구현
Color::Color(string c) {
    this->c = c;  // this 포인터를 사용하여 클래스의 멤버 변수 c에 매개변수 c의 값을 할당 (매개변수와 멤버변수의 이름이 다른 경우 굳이 this를 사용할 필요는 없음)
    cout << "매개변수생성자" << endl;  // 생성자가 호출됨을 사용자에게 알리는 메시지 출력
}
// 소멸자 구현
Color::~Color() {
    cout << "소멸자" << endl;  // 소멸자가 호출됨을 사용자에게 알리는 메시지 출력
}