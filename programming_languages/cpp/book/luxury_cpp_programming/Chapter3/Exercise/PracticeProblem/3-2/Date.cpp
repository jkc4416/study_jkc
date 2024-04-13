#include "Date.h"
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

// 연, 월, 일을 매개변수로 받는 생성자의 구현
Date::Date(int y, int m, int d) : year(y), month(m), day(d) {}

// 날짜 문자열을 매개변수로 받는 생성자의 구현
Date::Date(const std::string& dateStr) {
    std::stringstream ss(dateStr);
    char delim;
    // 문자열 파싱을 위해 stringstream을 사용
    if (!(ss >> year >> delim, delim == '/' && ss >> month >> delim, delim == '/' && ss >> day)) {
        std::cerr << "Invalid date format. Please use YYYY/MM/DD format." << std::endl;
        // Handle error appropriately: throw an exception, set an error state, etc.
    }
}

// 날짜를 출력하는 메서드의 구현
void Date::show() const {
    cout << year << "년" << month << "월" << day << "일" << endl;
}

// 연도를 반환하는 메서드
int Date::getYear() const {
    return year;
}

// 월을 반환하는 메서드
int Date::getMonth() const {
    return month;
}

// 일을 반환하는 메서드
int Date::getDay() const {
    return day;
}
