// Printer.cpp
#include "Printer.h"

// 생성자 정의: 프린터의 기본 정보를 초기화
Printer::Printer(const string& model, const string& manufacturer, int availableCount)
    : model(model), manufacturer(manufacturer), printedCount(0), availableCount(availableCount) {}

// 프린터의 기본 정보를 출력하는 함수 정의
void Printer::print(int pages) {
    if (pages > availableCount) {
        throw runtime_error("용지가 부족하여 프린트할 수 없습니다.");
    }
    availableCount -= pages;
    printedCount += pages;
}
