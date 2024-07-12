// Circle.h
#ifndef CIRCLE_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 시작
#define CIRCLE_H // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 정의

#include "Shape.h" // Shape 클래스를 상속받기 위해 Shape.h 파일을 포함

// Circle 클래스 정의: Shape 클래스를 상속받음
class Circle : public Shape {
public:
    int x; // Circle 클래스의 멤버 변수 x 선언
    virtual void draw() override; // 가상 함수 draw() 선언 및 오버라이드
};

#endif // 헤더 파일의 중복 포함을 방지하기 위한 전처리기 지시문 종료
