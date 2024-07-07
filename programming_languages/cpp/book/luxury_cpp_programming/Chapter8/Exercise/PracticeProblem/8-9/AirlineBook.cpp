// AirlineBook.cpp
#include "AirlineBook.h"  // AirlineBook 클래스의 선언을 포함
#include <iostream>       // 표준 입출력 스트림을 사용하기 위해 포함

using namespace std;      // std 네임스페이스를 사용

// 생성자 정의: 3개의 Schedule 객체를 동적 할당하여 초기화합니다.
AirlineBook::AirlineBook() {
    schedules = new Schedule[3];  // 3개의 Schedule 객체를 동적 할당하여 schedules 포인터에 저장
}

// 소멸자 정의: 동적으로 할당된 Schedule 객체를 해제하여 메모리 누수를 방지합니다.
AirlineBook::~AirlineBook() {
    delete[] schedules;  // 동적으로 할당된 Schedule 객체 배열을 해제
}

// 예약 기능 정의: 특정 시간대의 스케줄에 좌석을 예약합니다.
void AirlineBook::reserve(int time, const string& name, int seatNumber) {
    // time 값이 1이면 schedules[0], 2이면 schedules[1], 3이면 schedules[2]의 좌석을 예약합니다.
    schedules[time - 1].reserve(name, seatNumber);  // 해당 라인의 reserve 멤버 함수는 Schedule 클래스의 멤버
}

// 예약 취소 기능 정의: 특정 시간대의 스케줄에서 좌석 예약을 취소합니다.
void AirlineBook::cancel(int time, const string& name, int seatNumber) {
    // time 값이 1이면 schedules[0], 2이면 schedules[1], 3이면 schedules[2]의 좌석 예약을 취소합니다.
    schedules[time - 1].cancel(name, seatNumber);  // 해당 라인의 cancel 멤버 함수는 Schedule 클래스의 멤버
}

// 예약 보기 기능 정의: 모든 시간대의 예약된 좌석 상황을 출력합니다.
void AirlineBook::show() const {
    for (int i = 0; i < 3; i++) {  // 3개의 Schedule 객체에 대해 반복
        // 현재 시간대에 따라 출력할 시간 문자열을 선택합니다.
        cout << (i == 0 ? "07시: " : (i == 1 ? "12시: " : "17시: "));
        schedules[i].show();  // 각 Schedule 객체의 show() 함수를 호출하여 좌석 상황을 출력
    }
}
