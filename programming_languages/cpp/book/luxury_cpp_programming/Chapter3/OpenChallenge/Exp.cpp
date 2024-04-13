#include "Exp.h"
#include <cmath>  // pow 함수 사용을 위해

// Exp 클래스 구현부

// 생성자: 베이스와 지수를 인자로 받음
Exp::Exp(int b, int e) : base(b), exp(e) {}

// 생성자 오버로드: 베이스만 받고, 지수는 1로 초기화
Exp::Exp(int b) : base(b), exp(1) {}

// 기본 생성자: 베이스와 지수를 1로 초기화
Exp::Exp() : base(1), exp(1) {}

// 이 객체의 베이스와 지수로 계산된 값 반환
int Exp::getValue() const {
    return static_cast<int>(pow(base, exp));  // static_cast<int>: 명시적 형 변환 연산자 (pow 함수는 항상 double 형태의 리턴을 출력하므로 getValue 함수의 리턴형인 int로 형변환이 필요함)
}

// 베이스 값 반환
int Exp::getBase() const {
    return base;
}

// 지수 값 반환
int Exp::getExp() const {
    return exp;
}

// 다른 Exp 객체와 이 객체의 값이 같은지 비교
bool Exp::equals(const Exp& other) const {
    return this->getValue() == other.getValue();
}
/* const Exp& other: 
이 함수의 매개변수로, other라는 이름의 Exp 타입의 참조를 전달받습니다. 
const 키워드는 이 매개변수가 함수 내에서 수정될 수 없음을 보장합니다. 
이는 other 객체의 내용을 변경하지 않고 오직 읽기만 할 것임을 의미하며, 
또한 이 함수를 통해 const 객체도 전달받을 수 있습니다.*/
