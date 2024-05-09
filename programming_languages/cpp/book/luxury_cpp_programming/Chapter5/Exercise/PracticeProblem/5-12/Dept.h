#ifndef DEPT_H
#define DEPT_H
#include <iostream>
#include <cstring>
using namespace std;

// Dept 클래스 선언부

class Dept {
// private 접근 제어자를 가지는 멤버 변수 선언
private:
    int size;  // scores 배열의 크기
    int* scores;  // 동적 할당 받을 정수 배열의 주소 (학생들의 점수 저장)
public:
    Dept(int size);  // int 타입 매개변수 하나를 인자로 받는 생성자
    Dept(const Dept& dept);  // 복사 생성자 (깊은 복사 수행)
    ~Dept();  // 소멸자
    int getSize();  // 멤버 함수 (scores 배열의 크기를 리턴)
    void read();  // 멤버 함수 (size 만큼 키보드에서 정수를 읽어 scores 배열에 저장)
    bool isOver60(int index);  // 멤버 함수 (index의 학생의 성적이 60보다 크면 true 리턴)
};

#endif
