#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
using namespace std;

// Account 클래스 선언부
class Account {
// private 접근 제어자를 가지는 멤버 변수, 멤버 함수 선언
private:
    string owner;  // 계좌 소유자 이름
    int accountNumber;  // 계좌 번호
    int balance;        // 계좌 잔액
// public 접근 제어자를 가지는 생성자, 멤버 함수 선언
public:
    Account(const string& owner, int accountNumber, int balance); // 생성자 선언
    void deposit(int amount);  // 입금 메서드
    int withdraw(int amount);  // 출금 메서드
    string getOwner() const; // 소유자 이름 반환 메서드
    int inquiry() const;  // 잔액 조회 메서드
};

#endif // ACCOUNT_H
