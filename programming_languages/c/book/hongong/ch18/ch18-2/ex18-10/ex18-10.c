#include <stdio.h>

int main(void)
{
    FILE *fp;  // 파일 포인터 선언
    int age;  // 나이 저장할 변수 선언
    char name[20];  // 이름 저장할 변수 선언

    fp = fopen("a.txt", "r");  // 파일 개방

    fscanf(fp, "%d", &age);  // 파일로부터 나이 입력
    fgets(name, sizeof(name), fp);  // 파일로부터 이름 입력

    printf("나이: %d, 이름: %s", age, name);
    fclose(fp);

    return 0;
}