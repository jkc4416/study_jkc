// NamedCircle.h
#ifndef NAMEDCIRCLE_H
#define NAMEDCIRCLE_H

#include "Circle.h"
#include <string>
#include <iostream>
using namespace std;

// NamedCircle 클래스 정의: Circle 클래스를 상속받아 이름을 추가
class NamedCircle : public Circle {
private:
    string name; // 원의 이름

public:
    // 생성자: 반지름과 이름을 초기화
    NamedCircle(int radius, const string& name);

    // 원의 이름을 반환하는 함수
    string getName() const;

    // 원의 이름을 설정하는 함수
    void setName(const string& name);

    // 원의 정보를 출력하는 함수
    void show() const;
};

#endif
