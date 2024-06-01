// main.cpp
#include <iostream>
#include "Trace.h"
using namespace std;

// 함수 f: 두 정수를 입력받아 합을 계산하는 함수
void f() {
    int a, b, c;
    cout << "두 개의 정수를 입력하세요>>";
    cin >> a >> b;  // 두 정수를 입력받음
    Trace::put("f()", "정수를 입력 받았음");  // 디버깅 정보 저장
    c = a + b;  // 합을 계산
    Trace::put("f()", "합 계산");  // 디버깅 정보 저장
    cout << "합은 " << c << endl;  // 결과 출력
}

// main 함수: 프로그램의 실행 시작점
int main() {
    Trace::put("main()", "프로그램을 시작합니다");  // 디버깅 정보 저장
    f();  // 함수 f를 호출하여 정수 입력 및 합 계산
    Trace::put("main()", "종료");  // 디버깅 정보 저장

    Trace::print("f()");  // "f()" 태그를 가진 디버깅 정보를 모두 출력
    Trace::print("main()");
    Trace::print();  // 모든 디버깅 정보를 출력

    return 0;  // 프로그램 종료
}
