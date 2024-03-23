#include <stdio.h>

int main(void) {
	int score[5];
	int total = 0;
	double avg;

	printf("다섯 과목의 성적을 입력하시오: ");

	for (int i = 0; i < 5; i++) {
		scanf("%d", &score[i]);
	}

	printf("입력된 성적: \n");
	for (int i = 0; i < 5; i++) {
		printf("%d\t", score[i]);
		total += score[i];
	}

	printf("\n전체 점수: %d", total);

	return 0;
}