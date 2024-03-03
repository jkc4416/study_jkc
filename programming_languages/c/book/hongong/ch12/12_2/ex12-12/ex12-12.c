#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[80] = "pear";
    char str2[80] = "peach";

    printf("사전에 나중에 나오는 과일 이름: ");

    if (strcmp(str1, str2) > 0) {
        printf("%s\n", str1);
    } else if (strcmp(str1, str2) < 0) {
        printf("%s\n", str2);
    } else {
        printf("동일한 문자열입니다.\n");
    }

    return 0;
}