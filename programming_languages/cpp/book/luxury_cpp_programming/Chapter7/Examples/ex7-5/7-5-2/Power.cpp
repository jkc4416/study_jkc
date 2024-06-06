#include "Power.h"

// Power 클래스의 생성자 구현
Power::Power(int kick, int punch) {
    // 매개변수로 전달된 값으로 멤버 변수를 초기화
    this->kick = kick;
    this->punch = punch;
}

// Power 클래스의 show 멤버 함수 구현
void Power::show() {
    // kick과 punch 값을 출력
    cout << "kick=" << kick << ", " << "punch=" << punch << endl;
}

// == 연산자 오버로딩을 위한 멤버 함수 구현
bool Power::operator==(Power op2) {
    // 현재 객체와 op2 객체의 kick과 punch 값이 모두 동일한지 확인
    if (kick == op2.kick && punch == op2.punch) {
        return true;
    } else {
        return false;
    }
}
