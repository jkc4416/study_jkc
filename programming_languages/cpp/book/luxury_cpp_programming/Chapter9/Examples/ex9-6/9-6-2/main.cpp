// main.cpp
#include <iostream> // 표준 입출력 스트림을 사용하기 위해 포함
#include "GoodCalc.h" // GoodCalc 클래스의 선언을 포함하기 위해 GoodCalc.h 파일 포함

using namespace std; // std 네임스페이스를 사용

int main() {
    int a[] = {1, 2, 3, 4, 5}; // 정수 배열 a 선언 및 초기화
    Calculator *p = new GoodCalc(); // GoodCalc 객체를 동적으로 생성하고 Calculator 타입의 포인터 p로 가리킴

    // GoodCalc 객체의 멤버 함수 호출 및 결과 출력
    cout << p->add(2, 3) << endl; // add() 함수 호출
    cout << p->subtract(2, 3) << endl; // subtract() 함수 호출
    cout << p->average(a, 5) << endl; // average() 함수 호출

    delete p; // 동적으로 할당된 GoodCalc 객체 해제

    return 0; // 프로그램을 정상 종료
}
