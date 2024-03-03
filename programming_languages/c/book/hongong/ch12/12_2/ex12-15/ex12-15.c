#include <stdio.h>

int my_strlen(char* ps);  // 함수 선언

int main(void) {
    char str1[80] = "strawberry";

    printf("대상 문자열: %s\n", str1);
    printf("배열에 저장된 문자열의 길이: %d\n", my_strlen(str1));

    return 0;
}

int my_strlen(char* ps) {

    int cnt = 0;
    
    while (*ps != '\0') {
        cnt++;
        ps++;
    }

    return cnt;
}