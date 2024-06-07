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

// + 연산자 오버로딩을 위한 멤버 함수 구현
Power Power::operator+(int op2) {
    Power tmp;  // 임시 객체 생성
    // 현재 객체의 kick과 op2를 더한 값을 임시 객체의 kick에 저장
    tmp.kick = kick + op2;
    // 현재 객체의 punch와 op2를 더한 값을 임시 객체의 punch에 저장
    tmp.punch = punch + op2;
    return tmp;  // 임시 객체 리턴
}
