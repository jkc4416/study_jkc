#include <iostream>
#include "Power.h"
using namespace std;

// main 함수: 프로그램의 실행 시작점
int main() {
    // Power 객체 a와 b 생성
    // a는 (3, 5)로 초기화, b는 (0, 0)으로 초기화
    Power a(3, 5), b;

    // a, b 객체의 kick과 punch 값을 출력
    a.show();  // "kick=3, punch=5" 출력
    b.show();  // "kick=0, punch=0" 출력

    // a 객체에 2를 더한 결과를 b에 저장
    b = a + 2;

    // 연산 후의 a와 b 객체의 kick과 punch 값을 출력
    a.show();  // "kick=3, punch=5" 출력
    b.show();  // "kick=5, punch=7" 출력

    return 0;  // 프로그램 종료
}
