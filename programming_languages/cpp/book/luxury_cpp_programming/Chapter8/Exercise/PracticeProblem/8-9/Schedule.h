// Schedule.h
#ifndef SCHEDULE_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 시작
#define SCHEDULE_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 정의

#include "Seat.h" // Seat 클래스의 선언을 포함하기 위해 Seat.h 파일을 포함

// Schedule 클래스 정의: 하나의 스케줄을 관리하는 클래스
class Schedule {
private:
    Seat* seats;  // 8개의 좌석을 담고 있는 배열 (Seat 객체가 저장된 배열을 가리키는 포인터)
public:
    // 생성자: Schedule 객체가 생성될 때 8개의 Seat 객체를 동적 할당하여 초기화합니다.
    Schedule();

    // 소멸자: Schedule 객체가 소멸될 때 동적으로 할당된 Seat 객체를 해제하여 메모리 누수를 방지합니다.
    ~Schedule();

    // 좌석 예약 기능: 특정 좌석을 예약합니다.
    // name: 예약자 이름
    // seatNumber: 예약할 좌석 번호 (1 ~ 8)
    void reserve(const string& name, int seatNumber);

    // 좌석 예약 취소 기능: 특정 좌석 예약을 취소합니다.
    // name: 예약자 이름
    // seatNumber: 취소할 좌석 번호 (1 ~ 8)
    void cancel(const string& name, int seatNumber);

    // 좌석 예약 보기 기능: 모든 좌석의 예약 상황을 출력합니다.
    void show() const;
};

#endif // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 종료
