#include <stdio.h>

int main(void) {
	int A[3] = { 1, 2, 3 };
	int B[10];
	int count;

	count = sizeof(B) / sizeof(B[0]);

	for (int i = 0; i < count; i++) {
		B[i] = A[i % 3];
	}

	for (int i = 0; i < count; i++) {
		printf("%d\t", B[i]);
	}

	return 0;
}