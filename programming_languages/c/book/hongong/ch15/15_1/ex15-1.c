#include <stdio.h>

int main(void) {
    int a = 10;  // int형 변수 선언 및 초기화
    int* pi;  // 포인터 선언
    int **ppi;  // 이중 포인터 선언

    pi = &a;  // 변수 a의 주소를 포인터 변수 pi에 저장
    ppi = &pi;  // 포인터 변수 pi의 주소를 이중 포인터 변수 ppi에 저장
}