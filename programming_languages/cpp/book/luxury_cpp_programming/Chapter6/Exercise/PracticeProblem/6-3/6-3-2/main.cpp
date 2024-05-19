#include <iostream>
using namespace std;

// Function declarations
int big(int a, int b, int max = 100);

// main 함수: 프로그램의 실행 시작점
int main() {
    int x = big(3, 5);  // 3과 5 중 큰 값 5는 최대값 100보다 작으므로, 5 리턴
    int y = big(300, 60);  // 300과 60 중 큰 값 300이 최대값 100보다 크므로, 100 리턴
    int z = big(30, 60, 50);  // 30r과 60 중 큰 값 60이 최대값 50보다 크므로, 50 리턴
    cout << x << ' ' << y << ' ' << z << endl;
}

// Function to return the bigger of two integers, but not greater than a specified max value
int big(int a, int b, int max) {
    int bigger = (a > b) ? a : b;
    return (bigger > max) ? max : bigger;
}