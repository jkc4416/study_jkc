#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std; 

// Person 클래스 선언부
class Person {
// private 접근 제어자를 가지는 멤버 변수 선언
private:
    string name;
    string tel;
// public 접근 제어자를 가지는 생성자, 멤버 함수 선언
public:
    Person();  // 기본 생성자
    string getName();  // 멤버 함수
    string getTel();  // 멤버 함수
    void set(string name, string tel);  // 멤버 함수
};

#endif