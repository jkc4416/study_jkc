#include <stdio.h>

int main(void)
{
    FILE *ifp, *ofp;  // 파일 포인터 선언
    char name[20];
    int kor, eng, math;
    int total;
    double avg;
    int res;  // fscanf의 반환값 저장을 위한 변수 선언

    ifp = fopen("a.txt", "r");  // 입력 파일을 읽기 전용으로 개방
    if (ifp == NULL)  // 개방 여부 확인
    {
        printf("입력 파일을 열지 못했습니다.\n");
        return 1;
    }

    ofp = fopen("b.txt", "w");  // 입력 파일을 읽기 전용으로 개방
    if (ifp == NULL)  // 개방 여부 확인
    {
        printf("출력 파일을 열지 못했습니다.\n");
        return 1;
    }

    while (1)
    {
        res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math);  // ifp를 통해 읽은 데이터를 각 변수에 입력
        if (res == EOF)  // 파일의 데이터를 모두 읽으면 EOF 반환
        {
            break;
        }

        total = kor + eng + math;
        avg = total / 3.0;

        fprintf(ofp, "%s%5d%7.1lf\n", name, total, avg);  // 이름, 총점, 평균 출력 (파일에 출력)
    }

    fclose(ifp);
    fclose(ofp);

    return 0;
}
