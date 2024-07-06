// LaserPrinter.h
#ifndef LASERPRINTER_H
#define LASERPRINTER_H

#include "Printer.h"

// LaserPrinter 클래스 정의: 레이저 프린터, Printer를 상속
class LaserPrinter : public Printer {
private:
    int availableToner;  // 토너 잔량

public:
    // 생성자: 레이저 프린터의 기본 정보를 초기화
    LaserPrinter(const string& model, const string& manufacturer, int availableCount, int availableToner);

    // 소멸자
    ~LaserPrinter() {}

    // 레이저 프린터의 인쇄 기능
    void print(int pages) override;

    // 레이저 프린터의 정보를 출력하는 함수
    void show() const override;
};

#endif
