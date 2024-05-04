#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

// Person 클래스의 구현부
// 기본 생성자 구현
Person::Person() { }
// string 객체를 매개변수로 받는 생성자 구현
Person::Person(string name) {
    this->name = name;  // Person 클래스의 name 멤버 변수에 생성자 호출 시 입력 받은 매개변수 name 값 저장
}
// Person 클래스의 getName() 멤버 함수 구현
string Person::getName() {
    return name;
}