#include <stdio.h>

int main(void) {
	int score[5];
	int total = 0;
	double avg;

	printf("�ټ� ������ ������ �Է��Ͻÿ�: ");

	for (int i = 0; i < 5; i++) {
		scanf("%d", &score[i]);
	}

	printf("�Էµ� ����: \n");
	for (int i = 0; i < 5; i++) {
		printf("%d\t", score[i]);
		total += score[i];
	}

	printf("\n��ü ����: %d", total);

	return 0;
}