#include <iostream>
#include "Dept.h"
using namespace std;

// countPass: 60점 이상인 학생의 수를 세는 함수
int countPass(Dept dept) {
    int count = 0;
    for (int i = 0; i < dept.getSize(); i++) {
        if (dept.isOver60(i)) {
            count++;
        }
    }
    return count;
}

// main 함수: 프로그램의 실행 시작점
int main() {
    Dept com(10);  // 10명의 학생을 가진 학과 생성
    com.read();    // 점수 입력
    int n = countPass(com);  // 60점 이상 학생 수 계산
    cout << "60점 이상은 " << n << "명" << endl;  // 결과 출력
    return 0;
}
