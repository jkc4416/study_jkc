#include <stdio.h>

void swap_ptr(char **ppa, char **ppb);  // 함수 선언 (이중 포인터를 Argument로 받음)

int main(void) {
    char *pa = "success";  // 포인터 변수의 문자열 첫 번째 문자의 주소 저장
    char *pb = "failure";

    printf("pa -> %s, pb -> %s\n", pa, pb);
    swap_ptr(&pa, &pb);
    printf("pa -> %s, pb -> %s\n", pa, pb);

    return 0;
}

void swap_ptr(char **ppa, char **ppb) {
    char *pt;
    pt = *ppa;
    *ppa = *ppb;
    *ppb = pt;
}
