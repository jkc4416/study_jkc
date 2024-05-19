#ifndef UPANDDOWN_H
#define UPANDDOWN_H

#include "Person.h"
#include <cstdlib>  // 표준 라이브러리에서 난수 생성 함수를 사용하기 위해 필요
#include <ctime>    // 시간 함수를 사용하기 위해 필요
#include <iostream> // 표준 입출력 객체 및 함수 사용을 위해 필요
using namespace std;

// 게임 로직을 관리하는 UpAndDown 클래스
class UpAndDown {
private:
    static int number;  // 게임에서 사용자가 맞혀야 할 숫자
    static int low;     // 사용자의 추측 가능한 최소 범위
    static int high;    // 사용자의 추측 가능한 최대 범위

public:
    static void initializeGame();  // 게임 초기화 및 난수 생성
    static bool makeGuess(int guess, const Person& person); // 선수의 추측을 처리
    static void startGame(Person& p1, Person& p2);  // 게임을 시작하고 관리
};

#endif
