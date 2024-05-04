#ifndef CIRCLEMANAGER_H
#define CIRCLEMANAGER_H

#include "Circle.h"
#include <iostream>

using namespace std;

// CircleManager 클래스의 선언부

class CircleManager {
private:
// private 접근 제어자를 가지는 멤버 변수 선언
    Circle *p;  // Circle 배열에 대한 포인터 (원소가 Circle 객체로 구성된 배열을 가리키는 포인터)
    int size;   // 배열의 크기 (Circle 객체를 저장할 수 있는 배열의 크기 결정)
// public 접근 제어자를 가지는 생성자, 소멸자, 멤버 함수 선언
public:
    CircleManager(int size);  // 생성자
    ~CircleManager();  // 소멸자
    void setCircle(int index, string name, int radius); // 새로 추가한 함수
    void searchByName();  // 이름으로 검색
    void searchByArea();  // 면적으로 검색
};

#endif
