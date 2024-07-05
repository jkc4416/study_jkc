// Circle.h
#ifndef CIRCLE_H
#define CIRCLE_H

// Circle 클래스 정의: 원을 추상화한 클래스
class Circle {
private:
    int radius; // 원의 반지름

public:
    // 생성자: 반지름을 초기화. 기본값은 0.
    Circle(int radius = 0);

    // 반지름을 반환하는 함수
    int getRadius() const;

    // 반지름을 설정하는 함수
    void setRadius(int radius);

    // 원의 넓이를 계산하여 반환하는 함수
    double getArea() const;
};

#endif
