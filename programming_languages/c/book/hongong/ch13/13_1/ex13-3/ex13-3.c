#include <stdio.h>

void assign10(void);
void assign20(void);

int a;  // 전역 변수 선언

int main(void) {
    printf("함수 호출 전 a 값: %d\n", a);
    assign10();
    assign10();
    printf("함수 호출 후 a 값: %d\n", a);

}

void assign10(void) {
    a = 10;
}
void assign20(void) {
    int a;
    a = 20;
}
