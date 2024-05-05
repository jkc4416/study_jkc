#include "GamblingGame.h"
#include <iostream>
using namespace std;

int main() {
    string name1, name2;
    cout << "첫번째 선수 이름 >> ";
    cin >> name1;
    cout << "두번째 선수 이름 >> ";
    cin >> name2;

    GamblingGame game(name1, name2);
    game.startGame();  // 게임 시작

    return 0;
}
