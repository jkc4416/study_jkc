#include <stdio.h>

void print_ary(int* pa, int size);

int main(void) {
	int ary1[5] = { 10, 20,30,40,50 };
	int ary2[7] = { 100,200,300,400,500,600,700 };

	int size1, size2;

	size1 = sizeof(ary1) / sizeof(ary1[0]);
	size2 = sizeof(ary2) / sizeof(ary2[0]);

	print_ary(ary1, size1);
	printf("\n");
	print_ary(ary2, size2);
	printf("\n");

	return 0;
}

void print_ary(int* pa, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", pa[i]);
	}
}