#ifndef BASE_H
#define BASE_H

#include <iostream>
using namespace std;

// Base 클래스 선언
class Base {
private:
    int a;  // private 멤버 변수로서 Base 클래스 외부에서 접근 불가
protected:
    void setA(int a);  // protected 멤버 함수로서 Base 클래스 내부나 Base 클래스를 상속받은 파생 클래스 내부에서 접근 가능
public:
    void showA();  // public 멤버 함수로서 누구나 접근 가능
};

#endif
