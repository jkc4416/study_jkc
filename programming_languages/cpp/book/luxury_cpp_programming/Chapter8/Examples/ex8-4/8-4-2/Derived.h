#ifndef DERIVED_H
#define DERIVED_H

#include "Base.h"

// Derived 클래스 선언, Base 클래스를 private로 상속
class Derived : private Base {
private:
    int b;  // private 멤버 변수로서 외부 접근 불가
protected:
    void setB(int b);  // protected 멤버 함수로서 파생 클래스에서 접근 가능
public:
    void showB();  // public 멤버 함수로서 누구나 접근 가능
};

#endif
