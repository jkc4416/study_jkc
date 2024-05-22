#ifndef RANDOM_H
#define RANDOM_H

#include <cstdlib>
#include <ctime>

class Random {
public:
    static void seed();  // 항상 다른 랜덤수를 발생시키기 위한 seed를 설정하는 함수
    static int nextInt(int min = 0, int max = 32767);  // min과 max 사이의 랜덤 정수 리턴
    static char nextAlphabet();  // 랜덤 알파벳 문자 리턴
    static double nextDouble();  // 0보다 크거나 같고 1보다 적은 랜덤 실수 리턴
};

#endif
