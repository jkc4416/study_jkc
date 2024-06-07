#include <iostream>
#include "Power.h"
using namespace std;

// main 함수: 프로그램의 실행 시작점
int main() {
    // Power 객체 a, b, c 생성
    // a는 (3, 5)로 초기화, b는 (4, 6)으로 초기화, c는 (0, 0)으로 초기화
    Power a(3, 5), b(4, 6), c;

    // a, b 객체의 kick과 punch 값을 출력
    a.show();  // "kick=3, punch=5" 출력
    b.show();  // "kick=4, punch=6" 출력

    // a와 b 객체의 += 연산자 오버로딩을 사용하여 더한 결과를 c에 저장
    c = a += b;

    // 더한 결과를 출력
    a.show();  // "kick=7, punch=11" 출력
    c.show();  // "kick=7, punch=11" 출력

    return 0;  // 프로그램 종료
}
