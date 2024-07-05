// NamedCircle.cpp
#include "NamedCircle.h"

// 생성자 정의: 반지름과 이름을 초기화
NamedCircle::NamedCircle(int radius, const string& name) : Circle(radius), name(name) {}

// 원의 이름을 반환하는 함수 정의
string NamedCircle::getName() const {
    return name;
}

// 원의 이름을 설정하는 함수 정의
void NamedCircle::setName(const string& name) {
    this->name = name;
}

// 원의 정보를 출력하는 함수 정의
void NamedCircle::show() const {
    cout << "반지름이 " << getRadius() << "인 " << name << endl;
}
