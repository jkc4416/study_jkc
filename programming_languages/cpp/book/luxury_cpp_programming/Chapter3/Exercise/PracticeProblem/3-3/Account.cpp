#include "Account.h"
using namespace std;

// 계좌 생성자 구현
Account::Account(const string& owner, int accountNumber, int balance)
    : owner(owner), accountNumber(accountNumber), balance(balance) {}

// 입금 함수 구현
void Account::deposit(int amount) {
    balance += amount;  // 잔액에 입금액을 더함
}

// 출금 함수 구현
int Account::withdraw(int amount) {
    if (amount <= balance) {
        balance -= amount;  // 잔액에서 출금액을 뺌
        return amount;
    }
    return 0;  // 잔액 부족 시 0 반환
}

// 계좌 소유자 이름 반환 메서드
string Account::getOwner() const {
    return owner;
}

// 잔액 조회 메서드
int Account::inquiry() const {
    return balance;
}
