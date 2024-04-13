#include <iostream>
using namespace std;

// PrivateAccessError 클래스 선언부
class PrivateAccessError {
    // private 접근 제어자를 가지는 멤버 변수, 멤버 함수, 생성자 선언
    private:
    int a;  // 멤버 변수 선언
    void f();  // 멤버 함수 선언
    PrivateAccessError();  // 매개변수가 없는 생성자 선언

    // public 접근 제어자를 가지는 멤버 변수, 멤버 함수, 생성자 선언
    public:
    int b;  // 멤버 변수 선언
    int get_a();
    void g();  // 멤버 함수 선언
    PrivateAccessError(int x);  // 매개변수가 한 개인 생성자 선언
};

//PrivateAccessError 클래스 구현부
PrivateAccessError::PrivateAccessError() {
    a = 1;
    b = 1;
}
PrivateAccessError::PrivateAccessError(int x) {
    a = x;
    b = x;
}
void PrivateAccessError::f() {
    a = 5;
    b = 5;
}
void PrivateAccessError::g() {
    a = 6;
    b = 6;
}
int PrivateAccessError::get_a() {
    return a;
}

int main() {
    // PrivateAccessError objA;  // 컴파일 에러 발생 -> 생성자 PrivateAccessError()는 private이므로 main()에서 직접 호출할 수 없음
    PrivateAccessError objB(100);
    // objB.a = 10;  // 컴파일 에러 발생 -> a는 private 멤버 변수이므로 main()에서 직접 접근할 수 없음 
    objB.b = 20;
    cout << objB.get_a() << endl;  // public 접근 제어자를 가진 get_a() 멤버 함수를 통해서 private 접근 제어자를 가진 a 멤버 변수에 접근하여 값을 출력함
    cout << objB.b << endl;
    // objB.f();  // 컴파일 에러 발생 -> f()는 private 멤버 함수이므로 main()에서 직접 호출할 수 없음 
    objB.g();

}
