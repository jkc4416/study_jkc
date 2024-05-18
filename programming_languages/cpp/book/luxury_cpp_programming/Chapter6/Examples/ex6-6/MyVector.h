#ifndef MYVECTOR_H
#define MYVECTOR_H
#include <iostream>
using namespace std;

// MyVector 클래스 선언부

class MyVector {
// private 접근 제어자를 가지는 멤버 변수 선언
private:
    int *p;
    int size;
public:
    MyVector(int n=100);
    ~MyVector();
};

#endif
