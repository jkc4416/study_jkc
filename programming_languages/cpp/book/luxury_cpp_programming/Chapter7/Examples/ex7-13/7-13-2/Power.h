#ifndef POWER_H
#define POWER_H

class Power {
private:
    int kick;
    int punch;
public:
    Power(int kick=0, int punch=0);  // 생성자 선언
    void show();  // 상태 출력 함수 선언
    friend Power& operator++(Power& op);  // 전위 ++ 연산자 친구 함수 선언
    friend Power operator++(Power& op, int x);  // 후위 ++ 연산자 친구 함수 선언
};

#endif
