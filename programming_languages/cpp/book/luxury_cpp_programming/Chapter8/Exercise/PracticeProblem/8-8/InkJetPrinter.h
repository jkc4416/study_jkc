// InkJetPrinter.h
#ifndef INKJETPRINTER_H
#define INKJETPRINTER_H

#include "Printer.h"

// InkJetPrinter 클래스 정의: 잉크젯 프린터, Printer를 상속
class InkJetPrinter : public Printer {
private:
    int availableInk;  // 잉크 잔량

public:
    // 생성자: 잉크젯 프린터의 기본 정보를 초기화
    InkJetPrinter(const string& model, const string& manufacturer, int availableCount, int availableInk);

    // 소멸자
    ~InkJetPrinter() {}

    // 잉크젯 프린터의 인쇄 기능
    void print(int pages) override;

    // 잉크젯 프린터의 정보를 출력하는 함수
    void show() const override;
};

#endif
