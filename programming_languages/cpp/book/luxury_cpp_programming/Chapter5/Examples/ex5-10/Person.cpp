#include "Person.h"
#include <cstring>
using namespace std;

// Person 클래스 구현부

// 기본 생성자 구현
Person::Person() {}
// int 타입 매개변수와 char* 타입 매개변수를 하나씩 받는 생성자 구현
Person::Person(int id, const char* name) {
    this->id = id;
    int len = strlen(name);  // name의 문자 개수
    this->name = new char [len+1];  // name 문자열 공간 할당
    strcpy(this->name, name);  // name에 문자열 복사
    
}
// 소멸자 구현
Person::~Person() {
    if(name) { // 만약 name에 동적 할당된 배열이 있으면
        delete [] name;  // 동적 할당 메모리 소멸 (메모리 반환)
    }
}
// Person 클래스의 changeName 멤버 함수 구현
void Person::changeName(const char* name) {  // 이름 변경
    if(strlen(name) > strlen(this->name)) {
        return;  // 현재 name에 할당된 메모리보다 긴 이름으로 바꿀 수 없음
    }
    strcpy(this->name, name);
}
// Person 클래스의 show 멤버 함수 구현
void Person::show() {
    cout << id << ", " << name << endl;
}
