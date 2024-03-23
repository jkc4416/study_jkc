#include <stdio.h>

void print_line(void);

int main(void) {
	
	print_line();
	printf("학번\t이름\t전공\t학점\t\n");
	print_line();
	
	return 0;
}

void print_line(void) {

	for (int i = 0; i < 50; i++) {
		printf("-");
	}
	printf("\n");


	
	return;

}