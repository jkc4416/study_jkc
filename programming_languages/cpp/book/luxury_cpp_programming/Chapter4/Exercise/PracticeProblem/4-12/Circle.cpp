#include "Circle.h"
#define PI 3.14159265358979323846 // 정확한 PI 값 사용
using namespace std;

// Circle 클래스의 setCircle 멤버 함수 구현
void Circle::setCircle(string name, int radius) {
    this->name = name;  // Circle 클래스의 멤버 변수 name에 매개변수로 입력 받은 name을 저장
    this->radius = radius;  // Circle 클래스의 멤버 변수 radius에 매개변수로 입력 받은 radius을 저장
}

// Circle 클래스의 getArea() 멤버 함수 구현 (면적을 계산하여 반환)
double Circle::getArea() {
    return PI * radius * radius;  // Circle 클래스의 멤버 변수 radius 값을 이용해서 면적 계산 후 리턴
}

// Circle 클래스의 getName() 멤버 함수 구현 (이름을 반환)
string Circle::getName() {
    return name;  // Circle 클래스의 멤버 변수 name의 값을 반환
}
