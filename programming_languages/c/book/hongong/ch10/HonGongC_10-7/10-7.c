#include <stdio.h>

void input_ary(double* pa, int size);
void check_ary(double* pa, int size);
double find_max(double* pa, int size);

int main(void) {
	double ary[5];
	double max = 0.0;
	int size = sizeof(ary) / sizeof(ary[0]);
	printf("Array size: %d\n", size);
	
	input_ary(ary, size);
	check_ary(ary, size);
	max = find_max(ary, size);

	printf("Maximum value: %.1lf", max);
}

void input_ary(double* pa, int size) {
	printf("5개의 실수값을 입력하시오: ");

	for (int i = 0; i < size; i++) {
		scanf("%lf", pa);
		pa++;
	}
}

void check_ary(double* pa, int size) {
	printf("Check values of element of the array: ");
	for (int i = 0; i < size; i++) {
		printf("%.1lf ", *pa);
		pa++;
	}
	printf("\n");
}

double find_max(double* pa, int size) {

	double max = 0.0;

	for (int i = 0; i < size; i++) {
		if (*pa > max)
		{
			max = *pa;
		}

		pa++;
	}

	return max;
}