#include "Matrix.h"

Matrix::Matrix(int a, int b, int c, int d) {
    mat[0][0] = a;
    mat[0][1] = b;
    mat[1][0] = c;
    mat[1][1] = d;
}

void Matrix::show() const {
    cout << "Matrix = { ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << mat[i][j] << " ";
        }
    }
    cout << "}" << endl;
}

Matrix Matrix::operator+(const Matrix& rhs) const {
    Matrix temp;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            temp.mat[i][j] = mat[i][j] + rhs.mat[i][j];
        }
    }
    return temp;
}

Matrix& Matrix::operator+=(const Matrix& rhs) {
    *this = *this + rhs;
    return *this;
}

bool Matrix::operator==(const Matrix& rhs) const {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (mat[i][j] != rhs.mat[i][j]) {
                return false;
            }
        }
    }
    return true;
}
