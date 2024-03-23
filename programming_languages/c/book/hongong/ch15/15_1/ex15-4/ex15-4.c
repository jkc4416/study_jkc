#include <stdio.h>
#include <stdint.h>

int main(void) {
    
    int ary[5];

    printf("ary의 값: %lu\t", (uintptr_t)ary);  // 주소로서의 배열명의 값 (배열명 = 배열 첫 번째 요소의 주소)
    printf("ary의 주소: %lu\n", (uintptr_t)&ary);
    printf("ary + 1: %lu\t", (uintptr_t)(ary + 1));  // 4 차이남
    printf("&ary + 1: %lu\n", (uintptr_t)(&ary + 1));  // 20 차이남

    return 0;
}