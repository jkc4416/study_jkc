#include <stdio.h>

int main(void) {
	int kor, eng, mat, tot;

	kor = 70;
	eng = 80;
	mat = 90;

	tot = kor + eng + mat;
	printf("국어\t영어\t수학\t\n");
	printf("%d\t%d\t%d\n", kor, eng, mat);
	printf("총점: %d", tot);

	return 0;
}