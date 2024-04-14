#include <iostream>
#include "EvenRandom.h"

using namespace std;

// main 함수 정의
int main() {
    EvenRandom r; // EvenRandom 객체 생성
    cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10개 --" << endl;
    for (int i = 0; i < 10; i++) {
        cout << r.next() << ' '; // 짝수 랜덤 정수 출력
    }
    cout << endl;

    int from = 2; // 시작 범위
    int to = 10; // 종료 범위
    cout << "-- " << from << "에서 " << to << "까지의 짝수 랜덤 정수 10개 --" << endl;
    for (int i = 0; i < 10; i++) {
        cout << r.nextInRange(from, to) << ' '; // 범위 내 짝수 랜덤 정수 출력
    }
    cout << endl;

    return 0;
}
