#include <iostream>
#include "Power.h"
using namespace std;

// main 함수: 프로그램의 실행 시작점
int main() {
    // Power 객체 a, b, c 생성
    // a와 b는 kick과 punch 값이 동일, c는 다른 값으로 초기화
    Power a(3, 5), b(3, 5), c(3, 6);

    // a, b, c 객체의 kick과 punch 값을 출력
    a.show();  // "kick=3, punch=5" 출력
    b.show();  // "kick=3, punch=5" 출력
    c.show();  // "kick=3, punch=6" 출력

    // a와 b 객체의 == 연산자 비교
    if (a == b) {
        cout << "두 파워가 같다." << endl;  // 두 객체의 kick과 punch 값이 동일하므로 "두 파워가 같다." 출력
    } else {
        cout << "두 파워가 같지 않다." << endl;
    }

    // a와 c 객체의 == 연산자 비교
    if (a == c) {
        cout << "두 파워가 같다." << endl;
    } else {
        cout << "두 파워가 같지 않다." << endl;  // 두 객체의 kick 또는 punch 값이 다르므로 "두 파워가 같지 않다." 출력
    }

    return 0;  // 프로그램 종료
}
