#include <stdio.h>

void print_str(char **pps, int cnt);  // 함수 선언

int main(void) {
    char *ptr_ary[] = {"eagle", "tiger", "lion", "squirrel"};  // ptr_ary[]에는 char형 포인터 변수들이 저장된다고 생각하면 됨 -> 문자열 상수의 첫 번째 문자의 주소가 ptr_ary에 저장됨
    int count;

    printf("Size of 'ptr_ary': %lu\n", sizeof(ptr_ary));
    printf("Size of 'ptr_ary[0]': %lu\n", sizeof(ptr_ary[0]));
    
    count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
    printf("Value of 'count': %d\n", count);

    print_str(ptr_ary, count);

    return 0;
}

// 함수 정의
void print_str(char **pps, int cnt) {
    
    int i;
    
    printf("\nPrint elements of pointer array");
    for (i=0; i<cnt; i++) {
        printf("%s\n", pps[i]);  // pps는 이중 포인터 변수이기 때문에 결국 char형 포인터를 가리키는 주소가 저장되어 있다고 볼 수 있음 -> pps가 배열명과 동일한 방식으로 사용되는 것 같음
    }
}