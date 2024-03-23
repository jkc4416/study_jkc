#include <stdio.h>

int main(void) {
	int score[5];
	int total = 0;
	double avg;
	int count = 0;

	count = sizeof(score) / sizeof(score[0]);

	for (int i = 0; i < count; i++) {
		scanf("%d", &score[i]);
	}

	for (int i = 0; i < count; i++) {
		total += score[i];
	}

	avg = (double) total / (double) count;

	printf("%.1lf", avg);

}