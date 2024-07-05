// Point.h
#ifndef POINT_H
#define POINT_H

// Point 클래스 정의: 2D 좌표를 표현하는 클래스
class Point {
private:
    int x; // x 좌표
    int y; // y 좌표

public:
    // 생성자: 좌표를 초기화. 기본값은 (0, 0).
    Point(int x = 0, int y = 0);

    // x 좌표를 반환하는 함수
    int getX() const;

    // y 좌표를 반환하는 함수
    int getY() const;

    // 좌표를 설정하는 함수
    void setPoint(int x, int y);
};

#endif
