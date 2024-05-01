#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std; 

// Player 클래스 선언부
class Player {
// private 접근 제어자를 가지는 멤버 변수 선언
private:
    string name;
// public 접근 제어자를 가지는 생성자, 멤버 함수 선언
public:
    Player(const string& name);
    string getName() const;
    string sayWord() const;  // Simulates a player saying a word
};

#endif
