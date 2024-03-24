#include <stdio.h>

struct profile  // 구조체 선언
{
    int age;  // 나이를 저장할 멤버 선언
    double height;  // 키를 저장할 멤버 선언
};

struct student
{
    struct profile pf;  // profile 구조체를 멤버로 사용
    int id;  // 학번을 저장할 멤버
    double grade;  // 학점을 저장할 멤버
};

int main(void) {
    struct student yuni;

    yuni.pf.age = 17;
    yuni.pf.height = 164.5;
    yuni.id = 315;
    yuni.grade = 4.3;

    printf("나이: %d\n", yuni.pf.age);
    printf("키: %.1lf\n", yuni.pf.height);
    printf("학번: %d\n", yuni.id);
    printf("학점: %.1lf\n", yuni.grade);

    return 0;
}




