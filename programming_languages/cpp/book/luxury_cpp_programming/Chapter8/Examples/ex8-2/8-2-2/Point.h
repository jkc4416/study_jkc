#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <string>
using namespace std;

// 2차원 평면에서 한 점을 표현하는 클래스 Point 선언
class Point {
protected:  // protected 접근 지정자 사용
    int x, y;  // 한 점(x, y) 좌표값
public:
    void set(int x, int y);  // 좌표를 설정하는 멤버 함수
    void showPoint();  // 좌표를 출력하는 멤버 함수
};

// 2차원 평면에서 컬러 점을 표현하는 클래스 ColorPoint, Point를 상속 받음
class ColorPoint : public Point {
private:
    string color;  // 점의 색 표현
public:
    void setColor(string color);  // 색상을 설정하는 멤버 함수
    void showColorPoint();  // 색상과 좌표를 출력하는 멤버 함수
    bool equals(ColorPoint p);  // 두 컬러 점의 좌표와 색상을 비교하는 멤버 함수
};

#endif
