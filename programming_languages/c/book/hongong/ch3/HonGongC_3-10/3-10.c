#include <stdio.h>

int main(void) {
	int age; 
	double height;

	printf("나이와 키를 입력하세요: ");
	scanf("%d%lf", &age, &height);

	printf("나이\t키\t\n");
	printf("%d\t%.1lf\t\n", age, height);

	return 0;
}