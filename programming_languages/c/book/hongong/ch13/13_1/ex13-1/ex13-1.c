#include <stdio.h>

void assign(void);  // 함수 선언

int main(void) {
    
    auto int a = 0;  // 지역 변수 생성 (auto 생략 가능)

    assign();
    printf("main 함수 a: %d\n", a);

    return 0;
}

void assign(void) {
    auto int a;  // 지역 변수 생성 (auto 생략 가능)
    a = 10;
    printf("assign 함수 a: %d\n", a);
}