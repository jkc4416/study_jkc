#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std; 

// Person 클래스 선언부
class Person {
// private 접근 제어자를 가지는 멤버 변수 선언
private:
    string name;
// public 접근 제어자를 가지는 생성자, 멤버 함수 선언
public:
    Person();  // 기본 생성자 선언
    Person(string name);  // string 객체를 매개변수로 받는 생성자 선언
    string getName();  // 멤버 함수 선언
};

#endif