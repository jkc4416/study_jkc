#include "WordGame.h"
#include <iostream>
using namespace std;

// main() 함수 정의
int main() {
    WordGame game;  // WordGame 객체 생성
    int numPlayers;  // 끝말잇기 게임 참여 인원 저장을 위한 지역변수 생성

    cout << "끝말잇기 게임을 시작합니다\n";
    cout << "게임에 참가하는 인원은 몇명입니까? ";
    cin >> numPlayers;
    
    game.startGame(numPlayers);
    
    while (game.takeTurns()) {
        // Game continues as long as players keep matching words
    }
    cout << "게임 오버" << endl;
    return 0;
}
