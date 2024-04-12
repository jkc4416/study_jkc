#include <iostream>
using namespace std;

// Rectangle 클래스 선언부
class Rectangle {
    public:
    int width;
    int height;
    int getArea();
};

// Rectangle 클래스 구현부
int Rectangle::getArea() {
    return width*height;
}

int main() {
    Rectangle rect;
    rect.width = 3;
    rect.height = 5;
    cout << "사각형의 면적은 " << rect.getArea() << "입니다." << endl;
}