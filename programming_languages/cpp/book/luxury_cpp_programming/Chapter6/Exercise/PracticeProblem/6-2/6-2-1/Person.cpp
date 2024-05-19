#include "Person.h"

// 기본 생성자 구현
Person::Person() : id(1), weight(20.5), name("Grace") {}

// id와 name을 초기화하는 생성자 구현
Person::Person(int id, string name) : id(id), weight(20.5), name(name) {}

// id, name, weight을 초기화하는 생성자 구현
Person::Person(int id, string name, double weight) : id(id), weight(weight), name(name) {}

// 정보 출력 함수 구현
void Person::show() {
    cout << id << ' ' << weight << ' ' << name << endl;
}
