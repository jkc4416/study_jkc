#include <stdio.h>

int main(void)
{
	int a;

	printf("Enter the value!\n");
	scanf("%d", &a);

	while (a < 10)
	{
		scanf("%d", &a);
	}

	printf("You entered the value over 10!");

	return 0;
}