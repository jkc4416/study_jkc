#include <stdio.h>

extern int count;  // main.c 파일에 정의된 전역 변수 count를 사용하기 위해 공유
int total = 0;  // 전역 변수 선언

int input_data(void)
{
    int pos;

    while (1)
    {
        printf("양수 입력: ");
        scanf("%d", &pos);
        if (pos < 0)
        {
            break;
        }
        count++;
        total += pos;
    }

    return total;
}