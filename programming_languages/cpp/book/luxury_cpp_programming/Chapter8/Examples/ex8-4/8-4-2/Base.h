#ifndef BASE_H
#define BASE_H

#include <iostream>
using namespace std;

// Base 클래스 선언
class Base {
private:
    int a;  // private 멤버 변수로서 외부에서 접근 불가 (Base 클래스 내부에서만 접근 가능)
protected:
    void setA(int a);  // protected 멤버 함수로서 외부에서 접근 불가하나, Base 클래스 내부와 파생 클래스에서 접근 가능
public:
    void showA();  // public 멤버 함수로서 누구나 접근 가능
};

#endif
