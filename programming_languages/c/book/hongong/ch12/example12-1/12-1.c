#include <stdio.h>

int main(void) {
	printf("apple이 저장된 시작 주소 값: %p\n", "apple");
	printf("두 번째 문자의 주소 값: %p\n", "apple"+1);
	printf("첫 번째 문자: %c\n", *"apple");
	printf("두 번째 문자: %c\n", *("apple"+1));
	printf("배열로 표현한 네 번째 문자: %c\n", "apple"[3]);

	return 0;
}