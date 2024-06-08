#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <vector>

class Stack {
private:
    std::vector<int> data;  // 스택 데이터를 저장할 벡터

public:
    Stack() = default;  // 기본 생성자
    ~Stack() = default;  // 기본 소멸자

    // 스택에 데이터를 푸시하는 연산자 오버로딩
    Stack& operator<<(int value);
    // 스택에서 데이터를 팝하는 연산자 오버로딩
    Stack& operator>>(int& value);
    // 스택이 비어 있는지 확인하는 연산자 오버로딩
    bool operator!() const;
};

#endif // STACK_H
