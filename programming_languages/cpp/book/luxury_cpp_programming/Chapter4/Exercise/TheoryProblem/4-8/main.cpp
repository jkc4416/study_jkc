#include "Palette.h"  // Palette 클래스의 정의가 포함된 헤더 파일을 포함
#include <iostream>
using namespace std;

// main() 함수 정의
int main() {
    Palette *p = new Palette();  // Palette 객체를 동적으로 생성하고 포인터 변수 p에 주소를 할당함 (Palette 타입의 객체를 힙 메모리에 생성)
    delete p;  // 동적으로 할당된 메모리를 해제함
}
