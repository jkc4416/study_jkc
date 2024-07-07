// Console.h
#ifndef CONSOLE_H
#define CONSOLE_H

#include <string>
using namespace std;

// Console 클래스 정의: 사용자 입력을 관리하는 클래스
class Console {
public:
    // 메뉴를 출력하는 함수
    static void printMenu();

    // 비행 시간을 입력받는 함수
    static int inputTime();

    // 이름을 입력받는 함수
    static string inputName();

    // 좌석 번호를 입력받는 함수
    static int inputSeatNumber();
};

#endif
