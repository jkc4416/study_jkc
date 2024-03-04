#include <stdio.h>

int* sum(int a, int b);  // int형 변수의 주소를 반환하는 함수 선언


int main(void) {
    int* resp; // Result pointer

    resp = sum(10, 20);
    printf("두 정수의 합: %d\n", *resp);

    return 0;
}


int* sum(int a, int b) {

    static int sum = 0;
    sum = a + b;

    return &sum;

}

