#include <stdio.h>

int input_data(void);  // 양수를 입력하고 그 합을 반환
double average(void);  // 평균을 구하는 함수
void print_data(double);  // 출력 함수

int count = 0;  // 입력한 양수의 수 누적
static int total = 0;  // 입력한 양수의 합 (static으로 정의되었기 때문에 다른 소스 코드에서 활용 불가능)

int main(void)
{
    double avg;

    total = input_data();
    avg = average();
    print_data(avg);

    return 0;
}

void print_data(double avg)
{
    printf("입력한 양수의 개수: %d\n", count);
    printf("전체 합과 평균: %d, %.1lf\n", total, avg);
}