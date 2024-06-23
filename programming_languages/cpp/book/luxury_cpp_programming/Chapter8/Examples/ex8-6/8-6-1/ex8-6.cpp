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

/*
Base 클래스 내 protected 및 public 접근제어자를 가지는 멤버들의 접근제어자를 private으로 변경하여 Derived 클래스에 상속됨
즉, Derived 클래스가 Base 클래스를 'private 상속'함에 따라 setA(), showA()는 private 속성으로 변경되어 Derived에 상속됨 
*/
class Derived : private Base {
private:
    int b;
protected:
    void setB(int b) {
        this->b = b;
    }
public:
    void showB() {
        setA(5);  // 정상 컴파일. setA()는 Base 클래스의 protected 멤버이기 때문에 파생클래스 Derived에게 접근 허용
        showA();  // 정상 컴파일. showA()는 Base 클래스의 public 멤버이기 때문에 파생클래스 Derived에게 접근 허용
        cout << b << endl;
    }
};

class GrandDerived : private Derived {
private:
    int c;
protected:
    void setAB(int x) {
        // setA(x);  // 컴파일 에러. setA()는 private 속성으로 접근제어자가 변경되어 Base 클래스로부터 Derived 클래스에 상속되기 떄문에 GrandDerived 클래스에서 접근 불가함
        // showA();  // 컴파일 에러. showA()는 private 속성으로 접근제어자가 변경되어 Base 클래스로부터 Derived 클래스에 상속되기 때문에 GrandDerived 클래스에서 접근 불가함
        setB(x);  // 정상 컴파일.  setB()는 Derived 클래스의 protected 멤버이므로 파생클래스 GrandDerived에게 접근 허용
    }
};


int main() {
    Derived x;  // Derived 클래스 객체 생성

    // 다음 줄의 코드들은 모두 컴파일 오류 발생
    // x.a = 5;  // private 멤버 a에 접근 불가
    // x.setA(10);  // private 상속으로 인해 setA()에 접근 불가
    // x.showA();  // private 상속으로 인해 showA()에 접근 불가

    // x.b = 10;  // private 멤버 b에 접근 불가
    // x.setB(10);  // protected 멤버 함수 setB()에 접근 불가

    x.showB();  // public 멤버 함수 showB() 호출, 출력 가능

    GrandDerived y;  // GrandDerived 클래스 객체 생성
    // y.setAB(10);  // 컴파일 오류. setAB()는 protected 멤버 함수이므로 main()에서 접근 불가

    return 0;  // 프로그램 종료
}
