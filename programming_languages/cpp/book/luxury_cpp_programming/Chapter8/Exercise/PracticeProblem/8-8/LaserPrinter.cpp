// LaserPrinter.cpp
#include "LaserPrinter.h"
#include <iostream>
using namespace std;

// 생성자 정의: 레이저 프린터의 기본 정보를 초기화
LaserPrinter::LaserPrinter(const string& model, const string& manufacturer, int availableCount, int availableToner)
    : Printer(model, manufacturer, availableCount), availableToner(availableToner) {}

// 레이저 프린터의 인쇄 기능 정의
void LaserPrinter::print(int pages) {
    if (pages > availableCount) {
        throw runtime_error("용지가 부족하여 프린트할 수 없습니다.");
    }
    if (pages > availableToner) {
        throw runtime_error("토너가 부족하여 프린트할 수 없습니다.");
    }
    Printer::print(pages);  // 기본 프린터의 print 함수 호출
    availableToner -= pages;  // 토너 잔량 감소
}

// 레이저 프린터의 정보를 출력하는 함수 정의
void LaserPrinter::show() const {
    cout << "레이저 : " << model << ", " << manufacturer << ", 남은 종이 " << availableCount
         << "장, 남은 토너 " << availableToner << endl;
}
