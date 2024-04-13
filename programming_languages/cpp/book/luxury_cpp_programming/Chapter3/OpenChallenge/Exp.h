#ifndef EXP_H
#define EXP_H

// Exp 클래스 선언부
class Exp {
// private 접근 제어자를 가지는 멤버 변수, 멤버 함수 선언
private:
    int base;   // 베이스 값 (멤버 변수)
    int exp;    // 지수 값 (멤버 변수)
// public 접근 제어자를 가지는 멤버 변수, 멤버 함수 선언
public:
    Exp(int b, int e);   // 생성자 (베이스와 지수를 인자로 받음)
    Exp(int b);          // 생성자 오버로드 (베이스만 인자로 받고, 지수는 1로 초기화)
    Exp();               // 기본 생성자 (베이스와 지수를 1로 초기화)
    int getValue() const;  // 이 객체의 베이스와 지수로 계산된 값 반환
    int getBase() const;   // 베이스 값 반환
    int getExp() const;    // 지수 값 반환
    bool equals(const Exp& other) const;  // 다른 Exp 객체와 이 객체의 값이 같은지 비교

    /* C++에서 const 키워드는 "constant"의 약자로, 변수의 값을 변경할 수 없음을 나타냅니다. 
    클래스의 메서드 뒤에 const를 붙이는 경우, 해당 메서드가 클래스의 멤버 변수를 수정하지 않음을 보장하며, 
    해당 메서드 내에서는 객체의 어떠한 멤버 변수도 변경할 수 없습니다. 이는 메서드가 객체의 상태를 변경하지 않고, 
    객체를 읽기 전용으로만 사용한다는 것을 의미합니다. 
    이를 "const correctness"라고 부르며, 프로그램의 안정성과 예측 가능성을 향상시키는 데 도움이 됩니다.*/
};

#endif
