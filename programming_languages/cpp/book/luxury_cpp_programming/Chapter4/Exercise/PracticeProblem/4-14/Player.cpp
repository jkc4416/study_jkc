#include "Player.h"
using namespace std;

// Player 클래스 구현부

// string 타입 참조 변수를 매개변수로 받는 생성자 구현 (플레이어 이름을 초기화합니다.)
Player::Player(const string& name) : name(name) {}  // Member Initializer list를 사용해서 객체 초기화 진행
/*
    - name(name)
        : 클래스 멤버 변수인 name(왼쪽)을 생성자의 매개변수로 전달된 name(오른쪽)으로 초기화
    - { }
        : 생성자의 본문을 나타내며, 여기서는 필요 없기 때문에 비어있음
*/


// Player 클래스의 getName() 멤버 함수 구현 (이름을 반환하는 멤버 함수)
string Player::getName() const {
    return name;
}
