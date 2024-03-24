#include <stdio.h>

int main(void)
{
    int ch;  // 입력할 문자를 저장할 변수 선언

    while (1)
    {
        ch = getchar();  // 키보드에서 문자 입력

        if (ch == EOF)  // ctrl+z로 입력 종료 (리눅스에서는 ctrl+d)
        {
            break;
        }

        putchar(ch);  // 화면에 문자 출력
    }

    return 0;
}