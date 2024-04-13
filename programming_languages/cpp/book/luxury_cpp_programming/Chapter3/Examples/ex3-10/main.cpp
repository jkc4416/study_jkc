#include <iostream>
#include "Circle.h"
using namespace std;

// main 함수 정의
int main() {
    Circle donut;
    double area = donut.getArea();
    cout << "donut 면적은 ";
    cout << area << endl;

    Circle pizza(30);
    area = pizza.getArea();
    cout << "donut 면적은 ";
    cout << area << endl;    
}