// Seat.h
#ifndef SEAT_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 시작
#define SEAT_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 정의

#include <string> // std::string을 사용하기 위해 포함
using namespace std; // std 네임스페이스를 사용

// Seat 클래스 정의: 하나의 좌석을 관리하는 클래스
class Seat {
private:
    string reservedName; // 예약자 이름을 저장하는 멤버 변수
public:
    // 생성자: 좌석 초기화
    Seat(); // Seat 객체가 생성될 때 예약자 이름을 초기화합니다.

    // 좌석 예약 기능
    // name: 예약자 이름
    void reserve(const string& name); // 예약자 이름을 받아 좌석을 예약합니다.

    // 좌석 예약 취소 기능
    // name: 예약자 이름
    void cancel(const string& name); // 예약자 이름을 받아 좌석 예약을 취소합니다.

    // 좌석 예약 보기 기능
    void show() const; // 현재 좌석의 예약 상황을 출력합니다. 객체의 상태를 변경하지 않으므로 const로 선언됩니다.
};

#endif // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 종료
