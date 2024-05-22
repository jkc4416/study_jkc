#include <iostream>
#include "Random.h"
using namespace std;

int main() {
    Random::seed();  // 랜덤 시드 설정

    cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다" << endl;
    for (int i = 0; i < 10; i++) {
        cout << Random::nextInt(1, 100) << ' ';  // 1에서 100까지의 랜덤 정수 출력
    }
    cout << endl;

    cout << "알파벳을 랜덤하게 10개의 출력합니다" << endl;
    for (int i = 0; i < 10; i++) {
        cout << Random::nextAlphabet() << ' ';  // 랜덤 알파벳 문자 출력
    }
    cout << endl;

    cout << "랜덤한 실수를 10개를 출력합니다" << endl;
    for (int i = 0; i < 10; i++) {
        cout << Random::nextDouble() << '\t';  // 랜덤 실수 출력
        if(i == 4) {
            cout << '\n';
        }
    }
    cout << endl;

    return 0;
}
