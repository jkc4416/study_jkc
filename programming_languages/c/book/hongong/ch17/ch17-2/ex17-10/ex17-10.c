#include <stdio.h>

union student  // 공용체 선언 (공용체 변수의 크기는 멤버 중에서 크기가 가장 큰 멤버로 결정됨)
{
    int num;
    double grade;
};

int main(void) 
{
    union student s1 = {315};  // 공용체 변수의 선언과 초기화 (공용체 변수의 초기화는 첫 번째 멤버만 초기화 함)

    printf("학번: %d\n", s1.num);
    s1.grade = 4.4;
    printf("학점: %.1lf\n", s1.grade);
    printf("학번: %d\n", s1.num);  // 학번의 초깃값이 학점 멤버에 의해서 바뀜 (모든 멤버가 하나의 저장 공간을 같이 사용하므로)

    return 0;
}