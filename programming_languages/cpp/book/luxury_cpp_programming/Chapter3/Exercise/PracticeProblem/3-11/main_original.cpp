#include <iostream>
using namespace std;

// Box 클래스 선언부
class Box {
// private 접근 제어자를 가지는 멤버 변수 선언
private:
    int width, height;
    char fill;  // 박스의 내부를 채우는 문자
// public 접근 제어자를 가지는 생성자 및 멤버 함수 선언
public:
    Box(int w, int h) {
        setSize(w, h);
        fill = '*';
    }
    void setFill(char f) {
        fill = f;
    }
    void setSize(int w, int h) {
        width = w;
        height = h;
    }
    void draw();
};
void Box::draw() {
    for(int n=0; n<height; n++) {
        for(int m=0; m<width; m++) {
            cout << fill;
        }
        cout << endl;
    }
}

int main() {
    Box b(10, 2);
    b.draw();
    cout << endl;
    b.setSize(7, 4);
    b.setFill('^');
    b.draw();
}