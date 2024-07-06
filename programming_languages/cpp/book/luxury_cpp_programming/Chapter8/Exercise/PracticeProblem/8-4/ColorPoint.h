// ColorPoint.h
#ifndef COLORPOINT_H
#define COLORPOINT_H

#include "Point.h"
#include <string>
#include <iostream>
using namespace std;

// ColorPoint 클래스 정의: Point 클래스를 상속받아 색상을 추가
class ColorPoint : public Point {
private:
    string color; // 점의 색상

public:
    // 생성자: 좌표와 색상을 초기화. 기본값은 (0, 0)과 "BLACK".
    ColorPoint(int x = 0, int y = 0, const string& color = "BLACK");

    // 색상을 반환하는 함수
    string getColor() const;

    // 색상을 설정하는 함수
    void setColor(const string& color);

    // 점의 정보를 출력하는 함수
    void show() const;
};

#endif
