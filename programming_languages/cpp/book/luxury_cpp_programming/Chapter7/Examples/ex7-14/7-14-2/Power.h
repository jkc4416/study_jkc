#ifndef POWER_H
#define POWER_H

class Power {
private:
    int kick;
    int punch;
public:
    Power(int kick=0, int punch=0);
    void show();
    Power& operator<<(int n);  // 왼쪽 시프트 연산자 오버로딩
};

#endif
