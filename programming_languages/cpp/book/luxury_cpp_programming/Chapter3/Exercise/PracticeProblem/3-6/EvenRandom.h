#ifndef EVENRANDOM_H
#define EVENRANDOM_H

// EvenRandom 클래스 선언부
class EvenRandom {
// public 접근 제한자를 가지는 생성자 및 멤버 함수 선언
public:
    EvenRandom(); // 생성자에서 난수 생성기 초기화 (기본 생성자 선언)
    int next(); // 0에서 RAND_MAX 사이의 짝수 난수 반환 (멤버 함수 선언)
    int nextInRange(int from, int to); // from부터 to까지의 짝수 난수 반환 (멤버 함수 선언)
};

#endif // EVENRANDOM_H
