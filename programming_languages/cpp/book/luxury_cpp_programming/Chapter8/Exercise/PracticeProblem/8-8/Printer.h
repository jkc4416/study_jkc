// Printer.h
#ifndef PRINTER_H
#define PRINTER_H

#include <string>
using namespace std;

// Printer 클래스 정의: 모든 프린터의 기본 클래스
class Printer {
protected:
    string model;            // 프린터 모델명
    string manufacturer;     // 제조사
    int printedCount;        // 인쇄 매수
    int availableCount;      // 인쇄 종이 잔량

public:
    // 생성자: 프린터의 기본 정보를 초기화
    Printer(const string& model, const string& manufacturer, int availableCount);

    // 소멸자
    virtual ~Printer() {}

    // 프린터의 기본 정보를 출력하는 가상 함수
    virtual void print(int pages);

    // 프린터의 정보를 출력하는 가상 함수
    virtual void show() const = 0;
};

#endif
