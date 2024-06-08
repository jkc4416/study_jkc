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
    Matrix operator+(const Matrix& rhs) const;
    Matrix& operator+=(const Matrix& rhs);
    bool operator==(const Matrix& rhs) const;
};

#endif
