#include <stdio.h>

int main(void) {
	char ch;

	printf("문자 입력: ");
	
	ch = getchar();
	printf("%d", ch);

	return 0;
}