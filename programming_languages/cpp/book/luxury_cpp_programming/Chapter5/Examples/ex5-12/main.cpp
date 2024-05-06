/* 
묵시적 복사 생성에 의해 복사 생성자가 자동 호출되는 경우
*/

#include <iostream>
#include "Person.h"
using namespace std;

void f(Person person) {  // "값에 의한 호출"로 객체가 전달될 때, person 객체의 복사 생성자 호출
    person.changeName("dummy");
}

Person g() {
    Person mother(2, "Jane");
    return mother;  // 함수에서 객체를 리턴할 때, mother 객체의 복사본 생성, 복사본의 복사 생성자 호출
}

int main() {
    Person father(1, "Kitae"); 
    Person son = father;  // 객체로 초기화 하여 객체가 생성될 때, son 객체의 복사 생성자 호출
    f(father);  // "값에 의한 호출"로 객체가 전달될 때, person 객체의 복사 생성자 호출
    g();  // 함수에서 객체를 리턴할 때, mother 객체의 복사본 생성, 복사본의 복사 생성자 호출
}