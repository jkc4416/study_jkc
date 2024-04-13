#ifndef DATE_H
#define DATE_H

#include <string>

class Date {
private:
    int year, month, day;

public:
    Date(int y, int m, int d); // 연, 월, 일을 매개변수로 받는 생성자
    Date(const std::string& dateStr); // 날짜 문자열을 매개변수로 받는 생성자
    void show() const; // 날짜를 출력하는 메서드
    int getYear() const; // 연도 반환
    int getMonth() const; // 월 반환
    int getDay() const; // 일 반환
};

#endif // DATE_H
