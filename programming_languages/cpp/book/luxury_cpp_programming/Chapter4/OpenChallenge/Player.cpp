#include "Player.h"
#include <iostream>
using namespace std;

// Player 클래스의 구현부
// Player 클래스 생성자 구현
Player::Player(const string& name) : name(name) {
    // 매개변수로 전달받은 이름을 Player 객체의 name 멤버 변수에 초기화
    // 멤버 초기화를 통해 name 멤버 변수를 초기화
    // 이 방식은 name 매개변수의 값을 직접 멤버 변수 name에 복사함
    // 'const string& name'은 name 매개변수가 수정되지 않음을 보장함
}

// Player 클래스의 getName 멤버 함수 구현
string Player::getName() const {
    // Player 객체의 이름을 반환하는 멤버 함수
    // const 키워드는 이 함수가 객체의 상태를 변경하지 않음을 보장함
    return name;  // 멤버 변수 name의 값을 반환합니다.
}

// Player 클래스의 sayWord 멤버 함수 구현
string Player::sayWord() const {
    // 사용자로부터 단어 입력을 받아 반환
    // 이 함수도 const로 선언되어 있어, 함수 내에서 멤버 변수의 값을 변경할 수 없음
    string word;  // 로컬 변수 word를 선언
    cin >> word;  // 표준 입력을 통해 사용자로부터 단어를 입력 받음
    return word;  // 입력 받은 단어를 반환
}
