#ifndef OPERATIONS_H
#define OPERATIONS_H

// Operation 클래스 선언부
class Operation {
// protected 접근 제어자를 가지는 멤버 변수 선언
protected:
    int a, b;
// public 접근 제어자를 가지는 멤버 함수 선언
public:
    void setValue(int x, int y);
    virtual int calculate() = 0;  // 순수 가상 함수로 선언하여 이 클래스가 추상 클래스가 되도록 함
    /* 
    C++에서 순수 가상 함수는 해당 함수가 인터페이스만 제공하고, 실제 구현은 파생 클래스에서 반드시 제공해야 함을 명시하는 방법 (Java의 인터페이스와 같은 역할인듯?)
    순수 가상 함수는 일반적으로 = 0을 함수 선언 끝에 추가하여 정의
    이러한 함수가 하나라도 클래스에 존재하면 그 클래스는 추상 클래스가 되어, 그 자체로는 인스턴스화 할 수 없게 됩니다.
    */
};

// Operation 클래스를 상속하는 Add 클래스 선언부 (Add 클래스는 Operation 클래스의 모든 public 및 protected 멤버에 접근 가능)
class Add : public Operation {
public:
    int calculate();  // Operation 클래스의 public 접근 제어자를 가지는 멤버 순수 가상 함수인 calculate를 구현하기 위해 Add 클래스 내에서 명시적으로 선언
};

// Operation 클래스를 상속하는 Sub 클래스 선언부
class Sub : public Operation {
public:
    int calculate();  // Operation 클래스의 public 접근 제어자를 가지는 멤버 순수 가상 함수인 calculate를 구현하기 위해 Sub 클래스 내에서 명시적으로 선언
};

// Operation 클래스를 상속하는 Mul 클래스 선언부
class Mul : public Operation {
public:
    int calculate();  // Operation 클래스의 public 접근 제어자를 가지는 멤버 순수 가상 함수인 calculate를 구현하기 위해 Mul 클래스 내에서 명시적으로 선언
};

// Operation 클래스를 상속하는 Div 클래스 선언부
class Div : public Operation {
public:
    int calculate();  // Operation 클래스의 public 접근 제어자를 가지는 멤버 순수 가상 함수인 calculate를 구현하기 위해 Div 클래스 내에서 명시적으로 선언
};

#endif
