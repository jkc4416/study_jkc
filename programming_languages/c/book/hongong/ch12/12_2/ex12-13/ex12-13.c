#include <stdio.h>

char* my_strcpy(char* pd, char* ps);  // 함수 선언

int main(void) {
    char str[80] = "strawberry";

    printf("바꾸기 전 문자열: %s\n", str);
    my_strcpy(str, "apple");
    printf("바꾼 후 문자열: %s\n", str);
    printf("다른 문자열 대입: %s\n", my_strcpy(str, "kiwi"));

    return 0;
}

char* my_strcpy(char* pd, char* ps) {
    char* po = pd;  // pd 값을 나중에 반환하기 위해 pd가 처음에 가리키는 메모리 주소 보관

    while(*ps != '\0') {
        *pd = *ps;  // ps가 가리키는 메모리에 위치한 문자가 널 문자가 아닌 경우 pd가 가리키는 메모리의 문자를 ps가 가리키는 문자로 대체
        pd++;  // pd가 가리키는 메모리 주소 증가
        ps++;  // ps가 가리키는 메모리 주소 증가
    }
    *pd ='\0'; // 마지막에 널 문자 추가

    return po;
}