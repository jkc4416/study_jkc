#include <stdio.h>

int main(void) {
	int kor, eng, mat, tot;

	kor = 70;
	eng = 80;
	mat = 90;

	tot = kor + eng + mat;
	printf("����\t����\t����\t\n");
	printf("%d\t%d\t%d\n", kor, eng, mat);
	printf("����: %d", tot);

	return 0;
}