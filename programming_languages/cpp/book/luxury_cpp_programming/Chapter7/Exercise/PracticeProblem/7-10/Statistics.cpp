#include "Statistics.h"

// 데이터 삽입 연산자 구현
Statistics& Statistics::operator<<(int value) {
    data.push_back(value);
    return *this;
}

// 통계 데이터 출력 연산자 구현
void operator~(const Statistics& stat) {
    if (stat.data.empty()) {
        std::cout << "현재 통계 데이터가 없습니다." << std::endl;
        return;
    }

    for (int val : stat.data) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

// 평균 값을 반환하는 연산자 구현
void Statistics::operator>>(int& avg) const {
    if (data.empty()) {
        avg = 0;
        return;
    }
    
    int sum = 0;
    for (int val : data) {
        sum += val;
    }
    avg = sum / data.size();
}

// 데이터 존재 유무를 확인하는 연산자 구현
bool Statistics::operator!() const {
    return data.empty();
}
