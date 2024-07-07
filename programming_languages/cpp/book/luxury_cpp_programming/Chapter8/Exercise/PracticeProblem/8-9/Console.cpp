// Console.cpp
#include "Console.h"
#include <iostream>

using namespace std;

// 메뉴를 출력하는 함수 정의
void Console::printMenu() {
    cout << "예약:1, 취소:2, 보기:3, 끝내기:4>> ";
}

// 비행 시간을 입력받는 함수 정의
int Console::inputTime() {
    int time;
    cout << "07시:1, 12시:2, 17시:3>> ";
    cin >> time;
    return time;
}

// 이름을 입력받는 함수 정의
string Console::inputName() {
    string name;
    cout << "이름 입력>> ";
    cin >> name;
    return name;
}

// 좌석 번호를 입력받는 함수 정의
int Console::inputSeatNumber() {
    int seatNumber;
    cout << "좌석 번호>> ";
    cin >> seatNumber;
    return seatNumber;
}
