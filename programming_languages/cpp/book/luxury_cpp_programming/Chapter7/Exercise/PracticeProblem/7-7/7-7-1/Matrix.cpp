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

void Matrix::operator>>(int arr[]) {
    int index = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            arr[index++] = mat[i][j];
        }
    }
}

void Matrix::operator<<(const int arr[]) {
    int index = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            mat[i][j] = arr[index++];
        }
    }
}
