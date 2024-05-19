#include "UpAndDown.h"

int UpAndDown::number = 0;  // static 멤버 변수의 메모리 할당을 위한 전역변수 선언문 작성 (초기화)
int UpAndDown::low = 0;  // static 멤버 변수의 메모리 할당을 위한 전역변수 선언문 작성 (초기화)
int UpAndDown::high = 99;  // static 멤버 변수의 메모리 할당을 위한 전역변수 선언문 작성 (초기화)

// 게임을 초기화하고 정답 숫자를 생성
void UpAndDown::initializeGame() {
    srand((unsigned)time(0));  // 난수 생성을 위한 seed 초기화
    number = rand() % 100;  // 0에서 99 사이의 난수 생성
    low = 0;
    high = 99;
}

// 선수의 추측을 처리하는 함수
bool UpAndDown::makeGuess(int guess, const Person& person) {
    cout << person.getName() << " >> " << guess << endl;
    if (guess == number) {
        cout << person.getName() << "가 이겼습니다!!" << endl;
        return true;
    } else if (guess < number) {
        low = guess;
        cout << "답은 " << low << "과 " << high << " 사이에 있습니다." << endl;
    } else {
        high = guess;
        cout << "답은 " << low << "과 " << high << " 사이에 있습니다." << endl;
    }
    return false;
}

// 게임 시작 및 관리
void UpAndDown::startGame(Person& p1, Person& p2) {  // 두 명의 플레이어 객체를 참조 매개변수로 받음
    initializeGame();  // 게임 초기화와 관련된 멤버 함수인 initializeGame() 호출
    cout << "Up & Down 게임을 시작합니다." << endl;
    cout << "답은 0과 99 사이에 있습니다." << endl;
    while (true) {  // 정답을 맞출 때까지 makeGuess() 멤버 함수 반복 호출
        if (makeGuess(p1.guess(), p1)) break;  // 정답을 맞춰서 makeGuess 멤버 함수가 true 리턴 시 반복문 종료
        if (makeGuess(p2.guess(), p2)) break;
        /*
        p1.guess()
            : p1이 추측한 숫자를 반환
        makeGuess()
            : 추측이 정답인지 검사
        */
    }
}
