#include <iostream>
#include "ArrayUtility.h"
using namespace std;

int main() {
    int x[] = {1, 2, 3, 4, 5};  // int 배열
    double y[5];  // double 배열 (int 배열을 변환하여 저장할 배열)
    double z[] = {9.9, 8.8, 7.7, 6.6, 5.5};  // double 배열
    int size = 5;  // 배열의 크기

    // int 배열을 double 배열로 변환
    ArrayUtility::intToDouble(x, y, size);
    for (int i = 0; i < size; i++) {
        cout << y[i] << ' ';  // 변환된 double 배열 출력
    }
    cout << endl;

    // double 배열을 int 배열로 변환
    ArrayUtility::doubleToInt(z, x, size);
    for (int i = 0; i < size; i++) {
        cout << x[i] << ' ';  // 변환된 int 배열 출력
    }
    cout << endl;

    return 0;
}
