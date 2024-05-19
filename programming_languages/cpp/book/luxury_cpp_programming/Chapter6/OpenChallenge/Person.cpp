#include "Person.h"
#include <iostream>

// 생성자: 참가자의 이름을 초기화
Person::Person(const string& name) : name(name) {}
/*
    - const string& name
        : 생성자에 전달되는 매개변수
        : 이 매개변수는 참조(reference)로 전달되고, const 키워드가 붙어 있어 함수 내에서 매개변수가 변경되지 않음을 보장
    - : name(name)
        : 멤버 이니셜라이저 리스트라고 하며, 이를 통해 클래스의 멤버 변수를 초기화 함
        : 여기서는 클래스 내에 정의된 name 멤버 변수를 매개변수로 전달받은 name 값으로 초기화 함
        : 이 구문은 객체의 생성과 동시에 멤버 변수를 초기 상태로 설정하는 가장 효율적인 방법이며, 복사 생성자를 사용하여 전달받은 name 문자열을 Person 객체의 name 멤버에 복사함
*/

// 참가자의 이름을 반환
string Person::getName() const {  // 함수 선언의 끝에 있는 const는 이 함수가 객체의 상태를 변경하지 않는다는 것을 보장함 (즉, getName 함수 내에서 Person 객체의 멤버 변수를 수정할 수 없음)
    return name;  // Person 객체의 name 멤버 변수 반환
}

// 참가자로부터 숫자 추측을 입력받음
int Person::guess() const {
    int guess;
    cout << name << "의 추측: ";
    cin >> guess;
    return guess;
}
