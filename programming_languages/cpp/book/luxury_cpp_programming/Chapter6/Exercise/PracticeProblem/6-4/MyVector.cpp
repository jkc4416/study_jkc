#include "MyVector.h"

// MyVector 클래스 구현부

// 디폴트 매개변수를 가진 생성자 구현
MyVector::MyVector(int n, int val) {
    mem = new int[n];  // 크기가 n인 정수 배열을 동적 할당
    size = n;  // size 멤버 변수 초기화
    for (int i = 0; i < size; i++) {
        mem[i] = val;  // 배열의 각 요소를 val로 초기화
    }
}

// 소멸자 구현
MyVector::~MyVector() {
    delete[] mem;  // 동적 할당된 배열을 해제
}

// checkVector 멤버 함수 구현
void MyVector::checkVector() {
    for (int i = 0; i < size; i++) {  // vec1의 값 출력
        cout << mem[i] << " ";
    }    
    cout << endl;
}
