#include <stdio.h>

int main(void) {
	int ary[3] = { 10, 20, 30 };
	int* pa = ary;
	int count = sizeof(ary) / sizeof(ary[0]);

	printf("배열의 값: ");
	for (int i = 0; i < count; i++) {
		printf("%5d", *pa);
		pa++;
	}

	return 0;
}