#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {  // 소멸자를 가상 함수로 선언하면 ~Base()에 대한 호출은 실행 중에 동적 바인딩에 의해 ~Derived()에 대한 호출로 변하게 되어 ~Derived()가 실행됨
        cout << "~Base()" << endl;
    }
};

class Derived : public Base {
public:
    virtual ~Derived() {  // 파생 클래스의 소멸자는 자신이 실행된 후 기본 클래스의 소멸자를 호출하도록 컴파일 됨 -> 즉, ~Derived() 코드 실행 후 ~Base() 코드가 실행됨
        cout << "~Derived()" << endl;
    }
};

int main() {
    Derived *dp = new Derived();
    Base *bp = new Derived();

    delete dp;  // Derived의 포인터로 소멸 -> ~Derived() 실행 후 ~Base() 실행
    delete bp;  // Base의 포인터로 소멸 -> 동적 바인딩에 의해 ~Derived() 실행 후 ~Base() 실행
}