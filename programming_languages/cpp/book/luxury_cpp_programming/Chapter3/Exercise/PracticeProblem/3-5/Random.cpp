#include "Random.h"
#include <cstdlib> // srand, rand
#include <ctime> // time

// 생성자 정의
Random::Random() {
    srand((unsigned)time(0)); // 난수 생성기를 현재 시간을 기반으로 초기화
}

// 0에서 RAND_MAX 사이의 랜덤 정수 반환
int Random::next() {
    return rand();  // rand(): 0과 RAND_MAX (헤더 <cstdlib>에 정의된 상수, 보통 32767) 사이의 난수를 반환
}

// 지정된 범위 내의 랜덤 정수 반환
int Random::nextInRange(int from, int to) {
    return rand() % (to - from + 1) + from;
}
