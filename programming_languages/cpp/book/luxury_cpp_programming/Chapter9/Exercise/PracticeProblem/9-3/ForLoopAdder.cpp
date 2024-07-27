// ForLoopAdder.cpp
#include "ForLoopAdder.h" // ForLoopAdder 클래스의 선언을 포함하기 위해 포함

// for 문을 이용하여 합을 구하는 함수 정의
int ForLoopAdder::calculate() {
    int sum = 0; // 합을 저장할 변수 초기화
    // x부터 y까지의 합을 구함
    for (int i = getX(); i <= getY(); ++i) {
        sum += i;
    }
    return sum; // 합을 반환
}
