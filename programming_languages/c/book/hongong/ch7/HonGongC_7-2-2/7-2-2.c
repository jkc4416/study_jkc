#include <stdio.h>

void sum(int num);

int main(void) {
	sum(10);
	sum(100);

	return 0;
}

void sum(int num) {
	int sum = 0;

	for (int i = 1; i <= num; i++) {
		sum += i;
	}

	printf("1���� %d������ ���� %d�Դϴ�.\n", num, sum);
}