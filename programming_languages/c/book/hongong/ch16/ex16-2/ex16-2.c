#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *pi;  // 동적 할당 영역을 연결할 포인터 선언
    int i, sum = 0;

    pi = (int *)malloc(5 * sizeof(int));  // 저장 공간 20바이트 할당

    if (pi == NULL) {
        printf("메모리가 부족합니다.\n");
        exit(1);
    }

    printf("다섯 명의 나이를 입력하세요:");
    for (i=0; i<5; i++) {
        // scanf("%d", pi+i);
        scanf("%d", &pi[i]);
        sum += pi[i];
    }

    printf("다섯 사람의 평균 나이: %.1lf\n", (sum/5.0));
    free(pi);

    return 0;
}