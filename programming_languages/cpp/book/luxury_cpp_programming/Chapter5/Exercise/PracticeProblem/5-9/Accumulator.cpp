#include "Accumulator.h"

// 생성자
// 이 생성자는 Accumulator 객체가 생성될 때 초기 value를 설정합니다.
Accumulator::Accumulator(int value) : value(value) {}

// add 함수
// 이 함수는 주어진 정수 n을 현재 value 값에 더합니다.
// @return Accumulator&: 현재 객체의 참조를 반환하여 메서드 체이닝을 가능하게 합니다.
Accumulator& Accumulator::add(int n) {
    this->value += n;  // 멤버 value에 n을 더하여 누적
    return *this;      // 객체 자신의 참조를 반환
}

// get 함수
// 이 함수는 현재 value 값을 반환합니다.
int Accumulator::get() {
    return value;  // 누적된 값 반환
}
