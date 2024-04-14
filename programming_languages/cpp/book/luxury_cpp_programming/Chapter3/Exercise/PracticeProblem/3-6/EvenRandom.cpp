#include "EvenRandom.h"
#include <cstdlib> // srand, rand
#include <ctime> // time

// 생성자 정의
EvenRandom::EvenRandom() {
    /*
    srand(): "seed random"의 약자로써 난수 생성기에 초기 시드 값을 설정하는 함수
    time(0): <ctime> 라이브러리에 정의된 함수로써 현재 시간을 초 단위로 반환함
    */
    srand((unsigned)time(0)); // 난수 생성기를 현재 시간을 기반으로 초기화
}

// 0에서 RAND_MAX 사이의 짝수 랜덤 정수 반환
int EvenRandom::next() {
    int result = rand(); // 랜덤 수 생성
    return result % 2 == 0 ? result : result - 1; // 홀수일 경우 1을 빼서 짝수로 만듦
}

// from부터 to까지의 짝수 랜덤 정수 반환
int EvenRandom::nextInRange(int from, int to) {
    int range = to - from + 1; // 범위 계산
    int result = rand() % range + from; // 범위 내의 랜덤 정수 생성
    return result % 2 == 0 ? result : (result % 2 == 1 ? result + 1 : result - 1); // 홀수일 경우 다음 짝수로 조정
}
