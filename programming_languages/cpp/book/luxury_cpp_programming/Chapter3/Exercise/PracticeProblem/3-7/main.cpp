#include <iostream>
#include "SelectableRandom.h"

using namespace std;

int main() {
    SelectableRandom evenRandom(true); // 짝수 생성기 초기화
    SelectableRandom oddRandom(false); // 홀수 생성기 초기화

    cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10개 --" << endl;
    for (int i = 0; i < 10; i++) {
        cout << evenRandom.next() << ' ';
    }
    cout << endl;

    cout << "-- 0에서 " << RAND_MAX << "까지의 홀수 랜덤 정수 10개 --" << endl;
    for (int i = 0; i < 10; i++) {
        cout << oddRandom.next() << ' ';
    }
    cout << endl;

    int from = 2, to = 20;
    cout << "-- " << from << "에서 " << to << "까지의 짝수 랜덤 정수 10개 --" << endl;
    for (int i = 0; i < 10; i++) {
        cout << evenRandom.nextInRange(from, to) << ' ';
    }
    cout << endl;

    cout << "-- " << from << "에서 " << to << "까지의 홀수 랜덤 정수 10개 --" << endl;
    for (int i = 0; i < 10; i++) {
        cout << oddRandom.nextInRange(from, to) << ' ';
    }
    cout << endl;

    return 0;
}
