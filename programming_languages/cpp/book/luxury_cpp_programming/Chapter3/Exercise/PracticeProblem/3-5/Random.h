#ifndef RANDOM_H
#define RANDOM_H

// Random 클래스 선언부
class Random {
// public 접근 제어자를 가지는 생성자 및 멤버 변수 선언
public:
    Random(); // 생성자에서 난수 생성기 초기화
    int next(); // 0에서 RAND_MAX 사이의 난수 반환
    int nextInRange(int from, int to); // 지정된 범위 내에서 난수 반환
};

#endif // RANDOM_H
