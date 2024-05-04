#include "Family.h"
#include <iostream>
#include <string>
using namespace std;

// Family 클래스의 구현부
// 생성자 구현
Family::Family(string name, int size) {
    this->name = name;  // Family 클래스의 name 멤버 변수에 생성자에서 전달받은 name 매겨변수의 값 저장
    this->size = size;  // Family 클래스의 size 멤버 변수에 생성자에서 전달받은 size 매겨변수의 값 저장
    p = new Person [size];  // size 개수 만큼의 Person 객체를 저장할 수 있는 배열을 동적으로 생성해서 배열의 첫 번째 요소의 주소를 Person 객체를 저장할 수 있는 배열 포인터에 주소 저장
}
// 소멸자 구현
Family::~Family() {
    delete [] p;  // 동적으로 할당된 메모리 삭제
}
// Family 클래스의 setName() 멤버 함수 구현
void Family::setName(int num, string name_) {
    if(num >= 0 && num < size) {
        p[num] = Person(name_);  // 배열의 특정 위치에 name_ 문자열 값으로 초기화 된 Person 객체 저장
    }
}
// Family 클래스의 show() 멤버 함수 구현
void Family::show() {
    cout << name << " 가족은 다음과 같이 " << size << "명입니다." << endl;
    for (int i=0; i<size; i++) {
        cout << p[i].getName() << '\t';  // Person 클래스의 getName() 멤버 함수를 사용해서 가족의 각 구성원의 이름 출력
    }
    cout << endl;
}