// DoWhileLoopAdder.cpp
#include "DoWhileLoopAdder.h" // DoWhileLoopAdder 클래스의 선언을 포함하기 위해 포함

// do-while 문을 이용하여 합을 구하는 함수 정의
int DoWhileLoopAdder::calculate() {
    int sum = 0; // 합을 저장할 변수 초기화
    int i = getX(); // 루프 시작 값 설정
    // x부터 y까지의 합을 구함
    do {
        sum += i; // 합에 현재 값을 더함
        i++; // 다음 값으로 증가
    } while (i <= getY()); // y 값까지 반복
    return sum; // 합을 반환
}
