#include "MyVector.h"

// MyVector 클래스의 구현부

// 생성자 구현
MyVector::MyVector(int n) {
    p = new int [n];
    size = n;
}

// 소멸자: 동적 할당된 메모리를 해제합니다.
MyVector::~MyVector() {
    delete [] p;
}