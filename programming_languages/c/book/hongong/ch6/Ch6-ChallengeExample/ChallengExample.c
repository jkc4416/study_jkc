#include <stdio.h>

int main(void)
{
	int num;
	int pn;  // Define flag variable
	int cnt = 0;

	int i, j;

	printf("Please enter the number over 2: \n");
	scanf("%d", &num);

	printf("You enter the %d!\n", num);

	for (i = 2; i <= num; i++)
	{
		pn = 1;  // ó���� i�� �Ҽ���� �����ϰ� ��

		for (j = 2; j < i; j++)
		{
			if ((i % j) == 0)
			{
				pn = 0; // �Ҽ��� �ƴ��� Ȯ��
				break;
			}
		}

		if (pn == 1)
		{
			printf("%5d", i);
			cnt++;
			if ((cnt % 5) == 0) // 5�� ���� ��� �� �ٹٲ�
				printf("\n");
		}
	}

	return 0;
}