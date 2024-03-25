// 소스 파일 - main.c
#include <stdio.h>  // 시스템 헤더 파일의 내용 복사
#include "student.h"  // 사용자 정의 헤더 파일의 내용 복사

int main(void)
{
    Student a = {315, "홍길동"};

    printf("학번: %d, 이름: %s\n", a.num, a.name);

    return 0;
}