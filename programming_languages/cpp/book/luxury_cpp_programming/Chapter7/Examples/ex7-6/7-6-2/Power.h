#ifndef POWER_H
#define POWER_H

#include <iostream>
using namespace std;

// Power 클래스 선언부
class Power {
private:
    int kick;   // 발차기 힘을 저장하는 변수
    int punch;  // 펀치 힘을 저장하는 변수

public:
    // 생성자: 매개변수로 전달된 kick과 punch 값으로 멤버 변수를 초기화
    Power(int kick = 0, int punch = 0);

    // 멤버 함수를 선언
    void show();

    // += 연산자 오버로딩을 위한 함수 선언
    Power& operator+=(Power op2);
};

#endif // POWER_H
