#include "Person.h"

// 디폴트 매개변수를 가진 생성자 구현
Person::Person(int id, string name, double weight) : id(id), weight(weight), name(name) {}

// 정보 출력 함수 구현
void Person::show() {
    cout << id << ' ' << weight << ' ' << name << endl;
}
