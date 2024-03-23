#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char **ps);  // 동적 할당 영역의 문자열을 출력하는 함수 선언

int main(void) {
    char temp[80];  // 임시 char 배열
    char *str[21] = { 0 };  // 문자열을 연결할 포인터 배열, 널 포인터로 초기화
    int i = 0;  // 반복 제어 변수

    while (i<20) {

        printf("문자열을 입력하세요: ");
        gets(temp);

        if (strcmp(temp, "end") == 0) {
            break;
        }

        str[i] = (char *)malloc(strlen(temp) + 1);  // 입력된 문자열 길이에 맞도록 동적 할당 영역 설정
        strcpy(str[i], temp);  // 동적 할당 영역에 문자열 복사
        i++;
    }

    print_str(str);

    for (i=0; i<3; i++) {
        free(str[i]);  // 동적 할당 영역 반환
    }

    return 0;
}

void print_str(char **ps) {  // 매개변수로 str 배열이 들어가게 됨
    while (*ps != NULL) {  // 매개변수로 들어간 str 배열의 각 포인터 요소가 가리키는 값이 NULL이 아닌 동안에 Loop가 실행됨
        printf("%s\n", *ps);
        ps++;  // 포인터 연산을 통한 타겟 메모리 이동
    }
}