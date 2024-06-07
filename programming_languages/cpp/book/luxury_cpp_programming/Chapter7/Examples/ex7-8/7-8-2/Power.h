#ifndef POWER_H
#define POWER_H

class Power {
private:
    int kick;
    int punch;
public:
    Power(int kick=0, int punch=0); // 생성자 선언
    void show();
    Power& operator++();  // 전위 ++ 연산자 오버로딩
};

#endif
