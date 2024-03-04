#include <stdio.h>

int add_ten(int a);  // 함수 선언

int main(void) {
    int a = 10;
    a = add_ten(a);
    printf("a: %d\n", a);
    return 0;
}

int add_ten(int a) {
    a = a + 10;
    return a;
}
