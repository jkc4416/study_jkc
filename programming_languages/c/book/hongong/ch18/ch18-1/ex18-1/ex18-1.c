#include <stdio.h>

int main(void)
{
    FILE *fp;  // 파일 포인터 선언

    fp = fopen("a.txt", "a");
    if (fp == NULL)
    {
        printf("파일이 열리지 않았습니다.\n");
        return 1;
    }
    printf("파일이 열렸습니다.\n");
    fclose(fp);

    return 0;
}