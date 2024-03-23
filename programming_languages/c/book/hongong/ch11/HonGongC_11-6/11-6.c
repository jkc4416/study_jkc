#include <stdio.h>

void my_gets(char* str, int size);

int main(void) {
	char str[7];
	int count = sizeof(str) / sizeof(str[0]);
	printf("%d\n", count);
	
	my_gets(str, count);
	printf("�Է��� ���ڿ�: %s\n", str);

	return 0;
}

void my_gets(char* str, int size) {
	
	int ch;
	int i = 0;

	ch = getchar();

	while ((ch != '\n') && (i < size - 1)) {
		str[i] = ch;
		i++;
		ch = getchar();
	}

	str[i] = '\0';
}