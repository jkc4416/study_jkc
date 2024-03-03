#include <stdio.h>

void my_gets(char* ps) {
    
    char ch;

    while ((ch = getchar()) != '\n') {
        *ps = ch;
        ps++;
    }
    *ps = '\0';
}



int main(void) {
    int i = 0;
    char str[20];
    char ch;

    /* main 함수 내부에 로직 작성 */
    // do
    // {
    //     ch = getchar();
    //     str[i] = ch;
    //     i++;
    // } while (ch != '\n');
    // str[i] = '\0';


    /* 외부 함수 사용 시 */
    my_gets(str);

    /* 출력 */
    printf("%s\n", str);

    return 0;
}