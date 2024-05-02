#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

// Person 클래스의 구현부
// 기본 생성자 구현
Person::Person() {
}
// Person 클래스의 getName() 멤버 함수 구현
string Person::getName() {
    return name;
}
// Person 클래스의 getTel() 멤버 함수 구현
string Person::getTel() {
    return tel;
}
// Person 클래스의 set(string name, string tel) 멤버 함수 구현
void Person::set(string name, string tel) {
    this->name = name;
    this->tel = tel;
}