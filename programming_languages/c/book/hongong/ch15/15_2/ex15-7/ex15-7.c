#include <stdio.h>

int sum(int, int);

int main(void) {
    int (*fp)(int, int);  // 함수 포인터 선언
    int res;  // 반환값을 저장할 변수

    fp = sum;  // 함수명을 함수 포인터에 저장
    res = fp(10, 20);
    printf("result: %d\n", res);

    return 0;
}

int sum(int a, int b) {
    return (a+b);
}