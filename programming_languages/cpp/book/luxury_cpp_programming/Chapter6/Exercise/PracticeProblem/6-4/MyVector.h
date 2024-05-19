#ifndef MYVECTOR_H
#define MYVECTOR_H

#include <iostream>
#include <string>
using namespace std;

// MyVector 클래스 선언부
class MyVector {
private:
    int *mem;
    int size;
public:
    // 디폴트 매개변수를 가진 생성자 선언
    MyVector(int n = 100, int val = 0);
    ~MyVector();
    void checkVector();
};

#endif
