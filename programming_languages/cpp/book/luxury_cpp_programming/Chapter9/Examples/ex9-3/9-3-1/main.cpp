#include <iostream>
using namespace std;

class Base {
public:
    virtual void f() {
        cout << "Base::f() called" << endl;
    }
};

class Derived : public Base {
public:
    void f() {
        cout << "Derived::f() called" << endl;  // 오버라이딩 시 파생클래스에서는 virtual 지시어 생략 가능(가상 함수의 virtual 속성은 상속되는 성질이 있기 때문!)
    }
};

class GrandDerived : public Derived {
public:
    void f() {
        cout << "GrandDerived::f() called" << endl;
    }
};

int main() {
    GrandDerived g;
    Base *bp;
    Derived *dp;
    GrandDerived *gp;

    bp = dp = gp = &g;  // 모든 포인터가 객체 g를 가리킴

    bp->f();  // Base의 멤버 f() 호출 -> 동적 바인딩에 의해 GrandDerived의 멤버 f() 호출 (오버라이딩)
    dp->f();  // Derived의 멤버 f() 호출 -> 동적 바인딩에 의해 GrandDerived의 멤버 f() 호출 (오버라이딩)
    gp->f();  // GrandDerived의 멤버 f() 호출
}