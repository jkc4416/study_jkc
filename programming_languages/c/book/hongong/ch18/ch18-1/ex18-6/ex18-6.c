#include <stdio.h>

int main(void)
{
    FILE *fp;
    int ary[10] = {13, 10, 13, 13, 10, 26, 13, 10, 13, 10};
    int i;
    int res;

    fp = fopen("a.txt", "wb");  // 바이너리 파일로 개방
    
    for (i=0; i<10; i++)
    {
        fputc(ary[i], fp);  // 배열의 각 값에 해당하는 아스키 문자 출력
    }
    fclose(fp);  // 파일 닫음

    fp = fopen("a.txt", "rt");

    while (1)
    {
        res = fgetc(fp);
        if (res == 26)
        {
            break;
        }

        printf("%4d", res);
    }

    return 0;
}