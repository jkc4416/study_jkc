/* 
Circle 클래스의 복사 생성자와 객체 복사
*/

#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
    Circle src(30);
    Circle dest(src);

    cout << "원본의 면적 = " << src.getArea() << endl;
    cout << "사본의 면적 = " << dest.getArea() << endl;
}