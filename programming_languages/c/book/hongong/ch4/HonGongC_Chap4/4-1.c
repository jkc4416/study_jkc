#include <stdio.h>

int main(void) {
	int res;

	res = sizeof(short) < sizeof(long);

	(res == 1) ? printf("long") : printf("short");
	return 0;
}