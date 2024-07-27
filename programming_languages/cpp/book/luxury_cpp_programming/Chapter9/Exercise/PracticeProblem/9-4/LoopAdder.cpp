// LoopAdder.cpp
#include "LoopAdder.h" // LoopAdder 클래스의 선언을 포함하기 위해 포함

// x, y 값을 입력받는 함수 정의
void LoopAdder::read() {
    cout << name << ": " << endl; // 루프 이름 출력
    cout << "처음 수에서 두 번째 수까지 더합니다. 두 수를 입력하세요 >> ";
    cin >> x >> y; // 사용자로부터 x, y 값을 입력받음
}

// 결과 sum을 출력하는 함수 정의
void LoopAdder::write() {
    cout << x << "에서 " << y << "까지의 합 = " << sum << " 입니다." << endl;
}

// 연산을 진행하는 함수 정의
void LoopAdder::run() {
    read(); // x, y 값을 입력받음
    sum = calculate(); // 루프를 돌며 합을 계산
    write(); // 결과 sum을 출력
}
