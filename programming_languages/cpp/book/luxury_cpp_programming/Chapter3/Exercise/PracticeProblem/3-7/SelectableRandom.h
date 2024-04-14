#ifndef SELECTABLERANDOM_H
#define SELECTABLERANDOM_H

class SelectableRandom {
private:
    bool generateEven; // 짝수만 생성할 것인지, 홀수만 생성할 것인지 결정

public:
    SelectableRandom(bool generateEven); // 생성자에서 난수 유형 선택
    int next(); // 0에서 RAND_MAX 사이의 랜덤 짝수 또는 홀수 반환
    int nextInRange(int from, int to); // from부터 to까지의 랜덤 짝수 또는 홀수 반환
};

#endif // SELECTABLERANDOM_H
