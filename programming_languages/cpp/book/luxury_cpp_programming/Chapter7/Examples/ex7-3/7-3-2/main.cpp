#include <iostream>
#include "Rect.h"
#include "RectManager.h"
using namespace std;

// main 함수: 프로그램의 실행 시작점
int main() {
    // Rect 객체 a와 b를 생성하고 각각의 너비와 높이를 초기화
    Rect a(3, 4), b(5, 6);
    
    // RectManager 객체 생성
    RectManager man;

    // Rect 객체 a의 값을 b에 복사
    man.copy(b, a);  // b의 width와 height가 a와 동일해짐

    // 두 Rect 객체 a와 b가 동일한지 비교
    if (man.equals(a, b)) {
        cout << "equal" << endl;  // 동일하면 "equal" 출력
    } else {
        cout << "not equal" << endl;  // 동일하지 않으면 "not equal" 출력
    }

    return 0;  // 프로그램 종료
}
