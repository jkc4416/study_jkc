#include "WordGame.h"
#include <iostream>

using namespace std; 

// WordGame 클래스 구현부
// 기본생성자 구현
WordGame::WordGame() {
    cout << "영어 끝말잇기 게임을 시작합니다!";  // 한글을 잘 인식하지 못하는 것으로 보임
}
// WordGame 클래스의 addPlayer 멤버 함수 구현
void WordGame::addPlayer(const Player& player) {  // Player 객체의 참조를 매개변수로 받음, const를 사용함으로써 해당 함수 내에서 'player' 객체가 수정되지 않음을 보장함
    players.push_back(player);  // WordGame 클래스의 'players' 벡터에 'player'를 추가함 (push_back 메서드는 벡터의 끝에 새 요소를 추가함)
}
// WordGame 클래스의 startGame 멤버 함수 구현 (매개변수로 numPlayers를 받음)
void WordGame::startGame(int numPlayers) {
    string playerName;  // string 객체 생성
    for (int i = 0; i < numPlayers; ++i) {
        cout << "참가자의 이름을 입력하세요. 빈칸 없이 >> ";
        cin >> playerName;
        addPlayer(Player(playerName));  // Player 객체를 문자열 인수를 받는 Constructor를 사용해서 생성한 뒤 WordGame 클래스의 players 멤버 변수(벡터)에 추가
    }
    cout << "시작하는 단어는 father입니다.\n";
    currentWord = "father";

}
// WordGame 클래스의 takeTurns 멤버 함수 구현
bool WordGame::takeTurns() {
    string word;
    for (const auto& player : players) {  // 모든 플레이어에 대해 반복
        /*
        - const
            : 이 키워드는 반복 동안 각 요소를 수정하지 않고 사용함을 의미함, const를 사용함으로써 반복 중에 컨테이너의 요소를 변경할 수 없음을 보장함, 이는 프로그램의 안정성을 높이고 의도치 않은 데이터 변경을 방지함
        - auto
            : auto 키워드는 C++11에서 도입되었으며, 변수의 타입을 컴파일러에게 추론하게 함, 이는 변수 선언을 간결하게 하고 타입을 명시적으로 적지 않아도 되기 때문에 코드 유지 관리를 용이하게 함, auto를 사용하면 특히 STL 컨테이너 같이 복잡한 타입의 요소들을 다룰 때 코드가 훨씬 깔끔해짐
        - &
            : 주소 연산자는 여기서 각 요소에 대한 참조를 의미함, &를 사용함으로써 컨테이너의 각 요소를 복사하지 않고, 직접 참조를 통해 접근함, 이는 메모리 사용을 줄이고 성능을 향상시키는 효과가 있음, const와 함께 사용되어 요소들이 읽기 전용으로 처리됨을 보장함
        */
        cout << player.getName() << " >> ";
        word = player.sayWord();  // Get word from player input in real application
        cout << word << endl;

        // Check the last character of the current word and the first of the new word
        if (currentWord.at(currentWord.size() - 1) == word.at(0)) {
            // currentWord = word;  // 새 단어가 규칙에 맞으면 현재 단어를 새 단어로 업데이트
            setStartWord(word);  // 바로 위 코드와 같은 역할을 하는 함수를 사용해서 현재 단어를 새 단어로 업데이트
        } else {
            return false;  // 규칙에 맞지 않으면 false를 반환하고 함수 종료
        }
    }
    return true;
}
// WordGame 클래스의 setStartWord 멤버 함수 구현
void WordGame::setStartWord(const string& word) {
    currentWord = word;
}
