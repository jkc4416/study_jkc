#include <stdio.h>

int main(void) {
	int age; 
	double height;

	printf("���̿� Ű�� �Է��ϼ���: ");
	scanf("%d%lf", &age, &height);

	printf("����\tŰ\t\n");
	printf("%d\t%.1lf\t\n", age, height);

	return 0;
}