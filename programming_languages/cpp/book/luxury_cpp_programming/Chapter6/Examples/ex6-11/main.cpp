#include <iostream>
#include "Circle.h"
using namespace std;

// main 함수: 프로그램의 실행 시작점
int main() {
    Circle *p = new Circle[10];  // 10개의 생성자 실행
    cout << "생존하고 있는 원의 개수 = " << Circle::getNumofCircles() << endl;

    delete [] p;  // 10개의 소멸자 실행
    cout << "생존하고 있는 원의 개수 = " << Circle::getNumofCircles() << endl;

    Circle a;  // 생성자 실행
    cout << "생존하고 있는 원의 개수 = " << Circle::getNumofCircles() << endl;

    Circle b;  // 생성자 실행
    cout << "생존하고 있는 원의 개수 = " << Circle::getNumofCircles() << endl;
}
