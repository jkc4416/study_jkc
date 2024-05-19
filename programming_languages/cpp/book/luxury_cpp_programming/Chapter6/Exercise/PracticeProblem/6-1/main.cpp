#include <iostream>
using namespace std;

// Sum elements of one array
int add(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Sum elements of two arrays
int add(int arr1[], int size, int arr2[]) {
    int totalSum = 0;
    for (int i = 0; i < size; i++) {
        totalSum += arr1[i] + arr2[i];
    }
    return totalSum;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {6, 7, 8, 9, 10};
    int c = add(a, 5);  // 배열 a의 정수를 모두 더한 값 리턴
    int d = add(a, 5, b);  // 배열 a와 b의 정수를 모두 더한 값 리턴
    cout << c << endl;  // 15 출력
    cout << d << endl;  // 55 출력
}