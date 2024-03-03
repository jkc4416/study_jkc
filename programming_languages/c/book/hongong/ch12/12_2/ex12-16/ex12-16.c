#include <stdio.h>

int my_strcmp(char* pa, char* pb);  // 함수 선언

int main(void) {
    int res;
    char str1[80] = "strawberry";
    char str2[80];

    printf("대상 문자열: %s\n", str1);
    printf("비교할 문자열을 입력하시오: ");
    scanf("%s", str2);
    res = my_strcmp(str1, str2);

    if (res < 0) {
        printf("사전에서 먼저 나오는 문자열: %s\n", str1);
    } else if (res > 0) {
        printf("사전에서 먼저 나오는 문자열: %s\n", str2);
    } else {
        printf("같은 문자열입니다.\n");
    }

    return 0;
}

int my_strcmp(char* pa, char* pb) {

    while ((*pa == *pb) && (*pa != '\0')) {  // 두 문자가 같으나 널 문자가 아닌 경우
        pa++;
        pb++;
    }

    // 위의 while 반복문 이후 이 시점에서는 두 문자가 다르거나 둘 다 널 문자임
    if (*pa > *pb) {  // 앞 문자의 아스키 코드 값이 크면 1 반환
        return 1;
    } else if (*pa < *pb){  // 뒷 문자의 아스키 코드 값이 크면 -1 반환
        return -1;
    } else {
        return 0;  // 둘 다 널 문자이므로 같은 문자열 (0 반환)
    }
}