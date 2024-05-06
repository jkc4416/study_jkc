#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

// Person 클래스 선언부
class Person {
// private 접근 제어자를 가지는 멤버 변수 선언
private:
    char* name;  // char 타입 값을 가리키는 포인터 변수 선언
    int id;  // int 타입 변수 선언
// public 접근 제어자를 가지는 생성자, 소멸자, 멤버 함수 선언
public:
    Person();  // 기본 생성자 선언
    Person(int id, const char* name);  // int 타입 매개변수와 char* 타입 매개변수를 받는 생성자 선언
    ~Person();  // 소멸자 선언
    void changeName(const char *name);
    void show();
};

#endif