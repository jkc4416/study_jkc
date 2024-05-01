#include "Palette.h"
#include <iostream>
using namespace std;

// Palette 클래스의 구현부
// Palette 클래스 기본 생성자 구현
Palette::Palette() {
    // p = new Color[3];  // Color 타입의 객체 3개를 포함하는 배열을 동적으로 할당, 각 Color 객체 요소는 기본 생성자 호출을 통해 생성됨
    p = new Color[3] {Color(), Color("red"), Color("blue")};  // Color 타입의 객체 3개를 포함하는 배열을 동적으로 할당, 첫 번째 객체 요소는 기본 생성자 호출을 통해 생성되며, 나머지 객체 요소는 매개변수를 포함하는 생성자 호출을 통해 생성됨
}
// 소멸자 구현
Palette::~Palette() {
    delete [] p;  // 동적으로 할당된 배열 p를 해제
}