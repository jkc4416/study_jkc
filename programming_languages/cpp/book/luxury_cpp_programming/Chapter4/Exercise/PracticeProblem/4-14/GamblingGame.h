#ifndef GAMBLINGGAME_H
#define GAMBLINGGAME_H
#include "Player.h"
#include <array>
using namespace std;

// GamblingGame 클래스 선언부

class GamblingGame {
// private 접근 제어자를 가지는 멤버 변수 선언
private:
    array<Player, 2> players;  // 2명의 플레이어를 저장하는 배열 (배열의 원소는 Player 타입이어야 하며, 배열의 크기는 2)
    /*
        - std::array는 고정 크기의 배열을 제공하며, 여기서는 Player 타입의 객체 두 개를 저장합니다. 
        - Player 클래스는 게임 참가자의 정보를 관리합니다. 배열의 크기는 2로 지정되어 있어, 두 명의 플레이어만 게임에 참여할 수 있습니다
    */
// public 접근 제어자를 가지는 생성자 및 멤버 함수 선언
public:
    GamblingGame(const string& name1, const string& name2);  // 생성자
    /* 
        - 이 생성자는 GamblingGame 객체를 초기화하는 데 사용됩니다. 
        - 두 개의 std::string 참조(&)를 매개변수로 받아, 이 이름들을 사용하여 게임에 참여할 두 명의 플레이어 객체를 생성합니다. 
        - 이 매개변수들은 각 플레이어의 이름을 나타내며, 이 이름들은 Player 객체를 초기화하는 데 사용됩니다.
    */
    void startGame(); // 게임을 시작하는 함수
};

#endif
