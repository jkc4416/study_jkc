// InkJetPrinter.cpp
#include "InkJetPrinter.h"
#include <iostream>
using namespace std;

// 생성자 정의: 잉크젯 프린터의 기본 정보를 초기화
InkJetPrinter::InkJetPrinter(const string& model, const string& manufacturer, int availableCount, int availableInk)
    : Printer(model, manufacturer, availableCount), availableInk(availableInk) {}

// 잉크젯 프린터의 인쇄 기능 정의
void InkJetPrinter::print(int pages) {
    if (pages > availableCount) {
        throw runtime_error("용지가 부족하여 프린트할 수 없습니다.");
    }
    if (pages > availableInk) {
        throw runtime_error("잉크가 부족하여 프린트할 수 없습니다.");
    }
    Printer::print(pages);  // 기본 프린터의 print 함수 호출
    availableInk -= pages;  // 잉크 잔량 감소
}

// 잉크젯 프린터의 정보를 출력하는 함수 정의
void InkJetPrinter::show() const {
    cout << "잉크젯 : " << model << ", " << manufacturer << ", 남은 종이 " << availableCount
         << "장, 남은 잉크 " << availableInk << endl;
}
