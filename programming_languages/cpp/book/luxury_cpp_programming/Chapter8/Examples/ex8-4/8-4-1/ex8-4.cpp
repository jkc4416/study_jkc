#include <iostream>
using namespace std;

class Base {
private:
    int a;
protected:
    void setA(int a) {
        this->a = a;
    }
public:
    void showA() {
        cout << a << endl;
    }
};

class Derived : private Base {
/*
상속 시 접근 지정자를 private으로 하는 경우, Base 클래스 내의 protected 및 public 접근 지정자를 가지는 멤버의 접근 지정자가 모두 private으로 바뀌어서 파생 변수로 상속됨
즉, Derived 클래스가 Base 클래스를 'private 상속'함에 따라 Base 클래스의 setA(), showA() 멤버는 private 속성으로 변경되어 Derived 클래스에 상속됨
*/
private:
    int b;
protected:
    void setB(int b) {
        this->b = b;
    }
public:
    void showB() {
        cout << b << endl;
    }
};

int main() {
    Derived x;
    // x.a = 5;  // 컴파일 오류. a는 Derived 클래스에 상속되지만 private 멤버이므로 접근 불가
    // x.setA(10);  // 컴파일 오류. setA(), showA()는 private 멤버로 변경되어 Derived 클래스에 상속되기 때문에 Derived 클래스 외부에서 접근 불가
    // x.showA();  // 컴파일 오류. setA(), showA()는 private 멤버로 변경되어 Derived 클래스에 상속되기 때문에 Derived 클래스 외부에서 접근 불가
    // x.b = 10;  // 컴파일 오류. b는 private 멤버이기 때문에 Derived 클래스 외부에서 접근 불가
    // x.setB(10);  // 컴파일 오류. setB는 protected 멤버이므로 main()에서 접근 불가
    x.showB();  // 정상 컴파일. showB()는 public 멤버이므로 누구나 접근 가능
}