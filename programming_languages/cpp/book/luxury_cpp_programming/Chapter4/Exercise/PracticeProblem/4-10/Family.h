#ifndef FAMILY_H
#define FAMILY_H
#include <string>
#include "Person.h"
using namespace std; 

// Family 클래스 선언부
class Family {
// private 접근 제어자를 가지는 멤버 변수 선언
private:
    Person *p;  // Person 객체 배열 포인터
    string name;  // 가족 이름 저장
    string name_;  // 가족 구성원 이름 저장
    int size;  // Person 배열의 크기를 저장할 int 타입 변수 선언 (가족 구성원 수)
// public 접근 제어자를 가지는 생성자, 멤버 함수 선언
public:
    Family(string name, int size);  // size 개수만큼 Person 배열 동적 생성
    ~Family();  // 소멸자 선언
    void show();  // 멤버 함수 선언
    void setName(int num, string name_);  // 멤버 함수 선언
};

#endif