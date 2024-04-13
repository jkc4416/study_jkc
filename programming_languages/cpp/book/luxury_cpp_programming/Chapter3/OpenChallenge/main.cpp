#include <iostream>
using namespace std;
#include "Exp.h"

int main() {
    Exp a(3, 2);  // Exp 클래스의 매개변수가 두 개인 생성자 호출을 통해 a 인스턴스 생성
    Exp b(9);  // Exp 클래스의 매개변수가 한 개인 생성자 호출을 통해 b 인스턴스 생성
    Exp c;  // Exp 클래스의 기본 생성자 호출을 통해 c 인스턴스 생성

    cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
    cout << "a의 베이스: " << a.getBase() << ", "  << "지수: " << a.getExp() << endl;

    if (a.equals(b)) {
        cout << "same" << endl;
    } else {
        cout << "not same" << endl;
    }
}