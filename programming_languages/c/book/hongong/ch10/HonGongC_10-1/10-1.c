#include <stdio.h>

int main(void) {
	int ary[3];

	*(ary + 0) = 10; // ary[0] = 10
	*(ary + 1) = *(ary + 0) + 10;  // ary[1] = ary[0] + 10

	printf("�� ��° �迭 ��ҿ� Ű���� �Է�: ");
	scanf("%d", ary + 2);

	for (int i = 0; i < (sizeof(ary) / sizeof(ary[0])); i++) {
		printf("%5d", *(ary + i));
	}

	return 0;

}