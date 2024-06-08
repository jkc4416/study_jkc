#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[2][2]; // 2x2 행렬을 가정

public:
    // 생성자: 네 개의 정수를 받아 행렬 초기화
    Matrix(int a = 0, int b = 0, int c = 0, int d = 0);

    // 디스플레이 함수: 행렬의 모든 요소 출력
    void show() const;

    // 연산자 오버로딩: 배열에 행렬 요소 복사
    friend void operator>>(Matrix& m, int arr[]);

    // 연산자 오버로딩: 배열에서 행렬 요소 설정
    friend void operator<<(Matrix& m, const int arr[]);
};

#endif
