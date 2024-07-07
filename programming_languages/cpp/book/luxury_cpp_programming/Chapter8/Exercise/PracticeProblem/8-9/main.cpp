// main.cpp
#include <iostream>        // 입출력 스트림을 사용하기 위해 포함
#include "AirlineBook.h"   // AirlineBook 클래스의 선언을 포함
#include "Console.h"       // Console 클래스의 선언을 포함

using namespace std;       // std 네임스페이스를 사용

int main() {
    AirlineBook* airlineBook = new AirlineBook();  // AirlineBook 객체를 동적으로 생성하여 포인터에 저장
    int choice;                                    // 사용자 선택을 저장할 변수

    cout << "***** 한성 항공에 오신 것을 환영합니다 *****" << endl;  // 환영 메시지 출력

    while (true) {  // 무한 루프 시작
        Console::printMenu();  // 메뉴를 출력하는 함수 호출
        cin >> choice;         // 사용자로부터 선택을 입력받음

        if (choice == 1) {  // 예약 선택 시
            int time = Console::inputTime();          // 비행 시간을 입력받음
            int seatNumber = Console::inputSeatNumber();  // 좌석 번호를 입력받음
            string name = Console::inputName();       // 사용자 이름을 입력받음
            airlineBook->reserve(time, name, seatNumber);  // 입력받은 정보로 예약 수행
        } else if (choice == 2) {  // 예약 취소 선택 시
            int time = Console::inputTime();          // 비행 시간을 입력받음
            int seatNumber = Console::inputSeatNumber();  // 좌석 번호를 입력받음
            string name = Console::inputName();       // 사용자 이름을 입력받음
            airlineBook->cancel(time, name, seatNumber);  // 입력받은 정보로 예약 취소 수행
        } else if (choice == 3) {  // 예약 보기 선택 시
            airlineBook->show();   // 예약된 좌석 상황을 출력
        } else if (choice == 4) {  // 종료 선택 시
            break;  // 무한 루프 종료
        }
    }

    cout << "예약 시스템을 종료합니다." << endl;  // 종료 메시지 출력
    delete airlineBook;  // 동적으로 할당된 AirlineBook 객체를 해제

    return 0;  // 프로그램 정상 종료
}
