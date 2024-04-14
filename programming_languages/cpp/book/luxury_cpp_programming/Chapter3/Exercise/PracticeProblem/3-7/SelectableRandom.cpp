#include "SelectableRandom.h"
#include <cstdlib> // srand, rand
#include <ctime> // time

SelectableRandom::SelectableRandom(bool generateEven) : generateEven(generateEven) {
    srand((unsigned)time(0)); // 난수 생성기 초기화
}

int SelectableRandom::next() {
    int result = rand();
    if (generateEven) { // 짝수 생성
        return result % 2 == 0 ? result : result - 1;
    } else { // 홀수 생성
        return result % 2 == 1 ? result : result + 1;
    }
}

int SelectableRandom::nextInRange(int from, int to) {
    int result = rand() % (to - from + 1) + from;
    if (generateEven) { // 짝수 생성
        return result % 2 == 0 ? result : (result + 1 <= to ? result + 1 : result - 1);
    } else { // 홀수 생성
        return result % 2 == 1 ? result : (result + 1 <= to ? result + 1 : result - 1);
    }
}
