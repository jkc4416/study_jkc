#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "--Shape--" << endl;
    }
};

class Circle : public Shape {
public:
    int x;
    virtual void draw() {
        Shape::draw();  // 기본 클래스의 draw()의 호출
        cout << "Circle" << endl;
    }
};

int main() {
    Circle circle;
    Shape* pShape = &circle;

    pShape->draw();  // draw()가 virtual이므로 동적 바인딩 발생 
    pShape->Shape::draw();  // 범위 지정 연산자로 인해 정적 바인딩 발생
}