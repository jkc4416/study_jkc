#include <stdio.h>

int main(void) {
    int ary[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int (*pa)[4];  // int형 변수 4개의 배열을 가리키는 배열 포인터
    int i, j;

    pa = ary;  // ary는 2차원 배열 내 저장된 첫 번째 1차원 배열의 주소값이라고 보면 됨 (포인터에 배열명 저장 시 배열처럼 사용할 수 있음)
    for(i=0; i<3; i++) {
        for (j=0; j<4; j++) {
            printf("%5d", pa[i][j]);
        }
        printf("\n");
    }
}