#include <stdio.h>

int main(void) {
    int a = 10, b = 20;
    printf("교환 전 a와 b의 값: %d, %d\n", a, b);

    {  // 블록 시작
        int temp;

        temp = a;
        a = b;
        b = temp;
    }  // 블록 끝

    printf("교환 전 a와 b의 값: %d, %d\n", a, b);

    return 0;
}