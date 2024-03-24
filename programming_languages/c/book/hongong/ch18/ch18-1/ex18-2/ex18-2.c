#include <stdio.h>

int main(void)
{
    FILE *fp;  // 파일 포인터 선언
    int ch;  // 읽은 문자를 저장할 변수 선언

    fp = fopen("a.txt", "r");

    if (fp == NULL) 
    {
        printf("파일이 열리지 않았습니다.\n");
        return 1;
    }

    while(1)
    {
        ch = fgetc(fp);  // 개방한 파일로부터 문자 하나 읽음

        if (ch == EOF)  // 함수의 반환값이 EOF면 입력 종료
        {
            break;
        }

        putchar(ch);  // 입력된 문자를 화면에 출력
    }

    fclose(fp);

    return 0;
}