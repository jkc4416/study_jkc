#ifndef WORDGAME_H  // 헤더 파일 중복 포함 방지 시작
#define WORDGAME_H

#include "Player.h"  // Player 클래스를 포함, 게임 참가자를 관리하기 위함
#include <vector>  // 플레이어 목록을 저장하는 데 필요한 컨테이너
#include <string>  // 문자열을 사용하기 위해 포함

using namespace std;  // std 네임스페이스 사용

// WordGame 클래스 선언부
class WordGame {
// private 접근 제어자를 가지는 멤버 변수 선언
private:
    vector<Player> players;  // 게임 참여자 목록, Player 객체들을 저장하는 벡터
    string currentWord;  // 현재 게임에서 사용하고 있는 단어를 저장하기 위한 string 객체
// public 접근 제어자를 가지는 생성자 및 멤버 함수 선언
public:
    WordGame();  // 기본 생성자, 게임 시작 시 필요한 초기화 수행
    void addPlayer(const Player& player);  // 주어진 Player 객체를 게임의 참가자 목록에 추가하기 위한 멤버 함수
    void startGame(int numPlayers);  // 게임을 시작하는 멤버 함수, numPlayers는 게임에 참가할 플레이어 수를 의미하는 매개변수
    bool takeTurns();  // 플레이어가 차례로 단어를 말하는 멤버 함수, 단어가 규칙에 맞게 이어지는지 확인
    void setStartWord(const string& word);  // 게임의 시작 단어를 설정하는 멤버 함수
};

#endif  // 헤더 파일 중복 포함 방지 끝
