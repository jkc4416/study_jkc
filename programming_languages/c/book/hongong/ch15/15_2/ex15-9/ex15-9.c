#include <stdio.h>

int main(void) {
    int a = 10;
    double b = 3.5;
    void *vp;

    vp = &a;
    printf("a: %d\n", *(int *)vp);  // vp를 int* 형으로 변환 후 vp가 가리키는 변수 간접 참조

    vp = &b;
    printf("b: %.1lf\n", *(double *)vp);  // vp를 double* 형으로 변환 후 vp가 가리키는 변수 간접 참조 

    return 0;
}