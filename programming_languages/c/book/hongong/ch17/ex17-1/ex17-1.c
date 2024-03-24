#include <stdio.h>

struct student  // 구조체 선언
{
    int num;  // int형 멤버
    double grade;  // double형 멤버
};

int main(void) {
    struct student s1;  // struct student 형의 변수 선언

    s1.num = 2;  // s1의 num 멤버에 2 저장
    s1.grade = 2.7;
    printf("학번: %d\n", s1.num);
    printf("학점: %.1lf\n", s1.grade);

    return 0;
}
