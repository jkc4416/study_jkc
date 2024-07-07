// AirlineBook.h
#ifndef AIRLINEBOOK_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 시작
#define AIRLINEBOOK_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 정의

#include "Schedule.h" // Schedule 클래스의 선언을 포함하기 위해 Schedule.h 파일을 포함

// AirlineBook 클래스 정의: 예약 시스템을 관리하는 클래스
class AirlineBook {
private:
    Schedule* schedules;  // 3개의 스케줄을 담고 있는 배열 (Schedule 객체가 저장된 배열을 가리키는 포인터)
public:
    // 생성자: AirlineBook 객체가 생성될 때 3개의 Schedule 객체를 동적 할당하여 초기화합니다.
    AirlineBook();

    // 소멸자: AirlineBook 객체가 소멸될 때 동적으로 할당된 Schedule 객체를 해제하여 메모리 누수를 방지합니다.
    ~AirlineBook();

    // 예약 기능: 특정 시간대의 스케줄에 좌석을 예약합니다.
    // time: 예약할 비행 시간 (1: 07시, 2: 12시, 3: 17시)
    // name: 예약자 이름
    // seatNumber: 예약할 좌석 번호 (1 ~ 8)
    void reserve(int time, const string& name, int seatNumber);

    // 예약 취소 기능: 특정 시간대의 스케줄에서 좌석 예약을 취소합니다.
    // time: 취소할 비행 시간 (1: 07시, 2: 12시, 3: 17시)
    // name: 예약자 이름
    // seatNumber: 취소할 좌석 번호 (1 ~ 8)
    void cancel(int time, const string& name, int seatNumber);

    // 예약 보기 기능: 모든 시간대의 예약된 좌석 상황을 출력합니다.
    void show() const;
};

#endif // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 종료
