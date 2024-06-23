#ifndef GRANDDERIVED_H
#define GRANDDERIVED_H

#include "Derived.h"

// GrandDerived 클래스 선언, Derived 클래스를 private로 상속
class GrandDerived : private Derived {
private:
    int c;  // private 멤버 변수, 외부 접근 불가
protected:
    void setAB(int x);  // protected 멤버 함수, 파생 클래스에서 접근 가능
};

#endif
