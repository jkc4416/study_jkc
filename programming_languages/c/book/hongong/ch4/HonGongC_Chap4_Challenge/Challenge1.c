#include <stdio.h>

int main(void) {
	double weight, height, bmi;

	printf("������(Weight)�� Ű(Height)�� ������� �Է��Ͻÿ�: ");
	scanf("%lf%lf", &weight, &height);

	bmi = weight / (height*0.1 * height*0.1);

	(20.0 <= bmi <= 25.0) ? printf("ǥ���Դϴ�.") : printf("ü�߰����� �ʿ��մϴ�.");

	return 0;
}