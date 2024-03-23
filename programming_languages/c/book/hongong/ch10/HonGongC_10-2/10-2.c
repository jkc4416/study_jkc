#include <stdio.h>

int main(void) {
	int ary[3];
	int* pa = ary;
	int count = sizeof(ary) / sizeof(ary[0]);
	
	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1];

	for (int i = 0; i < count; i++) {
		printf("%5d", pa[i]);
	}

	return 0;
}