// Box.cpp
#include "Box.h"
#include <iostream>
using namespace std;

// 매개변수 두 개를 가지는 생성자 구현
Box::Box(int w, int h) {
    setSize(w, h);
    fill = '*';  // public 접근 제어자를 가지는 생성자를 사용해서 private 멤버 변수인 fill 설정
}

void Box::setFill(char f) {
    fill = f;  // public 접근 제어자를 가지는 생성자를 사용해서 private 멤버 변수인 fill 설정
}

void Box::setSize(int w, int h) {
    width = w;
    height = h;
}

void Box::draw() {
    for (int n = 0; n < height; n++) {
        for (int m = 0; m < width; m++) {
            cout << fill;
        }
        cout << endl;
    }
}
