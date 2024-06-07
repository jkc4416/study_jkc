#ifndef POWER_H
#define POWER_H

class Power {
private:
    int kick;
    int punch;
public:
    Power(int kick=0, int punch=0); // 생성자
    void show(); // 객체의 상태 출력
    Power operator++(int x); // 후위 ++ 연산자 오버로딩
};

#endif
