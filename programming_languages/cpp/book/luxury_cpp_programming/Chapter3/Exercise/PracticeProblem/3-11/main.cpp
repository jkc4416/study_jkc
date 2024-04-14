// main.cpp
#include "Box.h"
#include <iostream>
using namespace std;

// main 함수 구현
int main() {
    Box b(10, 2);  // Create a box of size 10x2 -> Box 클래스의 매개변수 두 개를 가지는 생성자를 사용해서 b 인스턴스 생성
    b.draw();      // Draw the box -> Box 클래스의 멤버 함수를 사용해서 상자 그림
    cout << endl;  // Add a newline for separation

    b.setSize(7, 4);  // Change box size to 7x4 -> Box 클래스의 
    b.setFill('^');  // Change fill character to '^' -> Box 클래스의 setFill() 멤버 함수를 사용해서 fill character 변경
    b.draw();        // Draw the modified box

    return 0;
}
