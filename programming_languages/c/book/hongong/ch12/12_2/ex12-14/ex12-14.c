#include <stdio.h>

char* my_strcat(char* pd, char* ps);  // 함수 선언

int main(void) {
    char str1[80] = "straw";
    char str2[80] = "berry";

    printf("첫 번째 문자열: %s\n", str1);
    printf("두 번째 문자열: %s\n", str2);
    my_strcat(str1, str2);
    printf("결합한 문자열: %s\n", str1);

    return 0;
}

char* my_strcat(char* pd, char* ps) {
    char* po = pd;  // pd 값을 나중에 반환하기 위해 pd가 처음에 가리키는 메모리 주소 보관

    while(*pd != '\0') {  // pd가 가리키는 위치를 널 문자의 위치로 이동
        pd++;
    }

    while(*ps !='\0') {
        *pd = *ps;
        pd++;
        ps++;
    }
    *pd ='\0'; // 마지막에 널 문자 추가

    return po;
}