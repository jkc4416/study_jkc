#ifndef STATISTICS_H
#define STATISTICS_H

#include <iostream>
#include <vector>

class Statistics {
private:
    std::vector<int> data;  // 동적 할당을 사용하지 않고 vector를 사용함

public:
    Statistics() = default;  // 기본 생성자
    ~Statistics() = default;  // 소멸자

    // 데이터 삽입 연산자
    Statistics& operator<<(int value);
    // 통계 데이터 출력 연산자
    friend void operator~(const Statistics& stat);
    // 평균 값을 반환하는 연산자
    void operator>>(int& avg) const;
    // 데이터 존재 유무를 확인하는 연산자
    bool operator!() const;
};

#endif // STATISTICS_H
