// Schedule.cpp
#include "Schedule.h"  // Schedule 클래스의 선언을 포함하기 위해 Schedule.h 파일을 포함
#include <iostream>    // 표준 입출력 스트림을 사용하기 위해 포함

using namespace std;  // std 네임스페이스를 사용

// 생성자 정의: Schedule 객체가 생성될 때 8개의 Seat 객체를 동적 할당하여 초기화합니다.
Schedule::Schedule() {
    seats = new Seat[8];  // 8개의 Seat 객체를 동적 할당하여 seats 포인터에 저장
}

// 소멸자 정의: Schedule 객체가 소멸될 때 동적으로 할당된 Seat 객체를 해제하여 메모리 누수를 방지합니다.
Schedule::~Schedule() {
    delete[] seats;  // 동적으로 할당된 Seat 객체 배열을 해제
}

// 좌석 예약 기능 정의: 특정 좌석을 예약합니다.
void Schedule::reserve(const string& name, int seatNumber) {
    seats[seatNumber - 1].reserve(name);  // seatNumber에 해당하는 Seat 객체의 reserve 함수를 호출하여 좌석을 예약합니다.
}

// 좌석 예약 취소 기능 정의: 특정 좌석 예약을 취소합니다.
void Schedule::cancel(const string& name, int seatNumber) {
    seats[seatNumber - 1].cancel(name);  // seatNumber에 해당하는 Seat 객체의 cancel 함수를 호출하여 좌석 예약을 취소합니다.
}

// 좌석 예약 보기 기능 정의: 모든 좌석의 예약 상황을 출력합니다.
void Schedule::show() const {
    for (int i = 0; i < 8; i++) {  // 8개의 좌석에 대해 반복
        seats[i].show();  // 각 Seat 객체의 show 함수를 호출하여 좌석 상황을 출력
        if (i < 7) cout << " ";  // 마지막 좌석이 아닌 경우 공백을 출력
    }
    cout << endl;  // 모든 좌석 상황을 출력한 후 줄 바꿈
}
