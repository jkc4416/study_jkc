// Seat.cpp
#include "Seat.h"  // Seat 클래스의 선언을 포함하기 위해 Seat.h 파일을 포함
#include <iostream> // 표준 입출력 스트림을 사용하기 위해 포함

using namespace std;  // std 네임스페이스를 사용

// 생성자 정의: 좌석 초기화
Seat::Seat() {
    reservedName = "---";  // 예약자 이름을 "---"로 초기화하여 예약되지 않은 상태를 나타냅니다.
}

// 좌석 예약 기능 정의: 좌석을 예약합니다.
void Seat::reserve(const string& name) {
    reservedName = name;  // 예약자 이름을 받아 reservedName에 저장합니다.
}

// 좌석 예약 취소 기능 정의: 좌석 예약을 취소합니다.
void Seat::cancel(const string& name) {
    if (reservedName == name) {  // 현재 예약된 이름이 입력된 이름과 일치할 경우에만 취소합니다.
        reservedName = "---";  // 예약자 이름을 "---"로 설정하여 좌석을 예약되지 않은 상태로 만듭니다.
    }
}

// 좌석 예약 보기 기능 정의: 좌석의 현재 예약 상황을 출력합니다.
void Seat::show() const {
    cout << reservedName << "\t";  // 현재 예약자 이름을 출력합니다. 예약되지 않은 경우 "---"가 출력됩니다.
}
