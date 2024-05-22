#include "Random.h"

// 항상 다른 랜덤수를 발생시키기 위한 seed를 설정하는 함수
void Random::seed() {
    srand(static_cast<unsigned int>(time(0)));  // 현재 시간을 시드로 사용
}

int Random::nextInt(int min, int max) {
    return rand() % (max - min + 1) + min;  // min과 max 사이의 랜덤 정수 리턴
    /*
    - rand()
        : 0에서 RAND_MAX 사이의 랜덤 정수를 생성
    */
}

char Random::nextAlphabet() {
    int isUpperCase = rand() % 2;  // 대문자 또는 소문자 결정 (0 or 1)
    if (isUpperCase) {
        return 'A' + rand() % 26;  // 랜덤 대문자
    } else {
        return 'a' + rand() % 26;  // 랜덤 소문자
    }
}

double Random::nextDouble() {
    return static_cast<double>(rand()) / RAND_MAX;  // 0보다 크거나 같고 1보다 적은 랜덤 실수 리턴
}
