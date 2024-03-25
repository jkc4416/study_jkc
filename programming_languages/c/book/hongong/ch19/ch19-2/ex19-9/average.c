extern int count;  // main.c에 정의된 전역 변수 count를 사용하기 위해 공유
extern int total;  // input.c에 정의된 전역 변수 total를 사용하기 위해 공유

double average(void)
{
    return total / (double)count;
}