#include <stdio.h>

int sum(int x, int y);

int main(void) {
	int a = 10, b = 20;
	int result;

	result = sum(a, b);
	printf("result: %d", result);

	return 0;
}

int sum(int x, int y) {

	int tmp;

	tmp = x + y;

	return tmp;
}