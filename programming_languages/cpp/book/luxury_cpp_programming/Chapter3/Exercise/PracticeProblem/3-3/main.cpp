#include <iostream>
#include "Account.h"
using namespace std;

int main() {
    Account a("kitae", 1, 5000);  // Account 클래스의 생성자 중 세 개의 매개변수를 가지는 생성자를 통해 인스턴스 생성 (매개변수 타입은 string, int, int 순서로 구성)
    a.deposit(50000);  // Account 클래스의 public 멤버 함수 deposit 호출
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
    int money= a.withdraw(20000);  // Account 클래스의 public 멤버 함수 withdraw 호출
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}