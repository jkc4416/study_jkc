#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[2][2];

public:
    Matrix(int a = 0, int b = 0, int c = 0, int d = 0);
    void show() const;

    friend Matrix operator+(const Matrix& lhs, const Matrix& rhs);
    friend Matrix& operator+=(Matrix& lhs, const Matrix& rhs);
    friend bool operator==(const Matrix& lhs, const Matrix& rhs);
};

#endif
