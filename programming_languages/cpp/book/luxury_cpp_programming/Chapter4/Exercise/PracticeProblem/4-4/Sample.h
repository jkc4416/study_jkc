#ifndef SAMPLE_H
#define SAMPLE_H
#include <string>
using namespace std; 

// Sample 클래스 선언부
class Sample {
// private 접근 제어자를 가지는 멤버 변수 선언
private:
    int *p;
    int size;
// public 접근 제어자를 가지는 생성자, 멤버 함수 선언
public:
    Sample(int n);  // int 타입 매개변수 하나를 받는 생성자 선언
    void read();  // 멤버 함수 선언
    void write();  // 멤버 함수 선언
    int big();  // 멤버 함수 선언
    ~Sample();  // 소멸자 선언
};

#endif




