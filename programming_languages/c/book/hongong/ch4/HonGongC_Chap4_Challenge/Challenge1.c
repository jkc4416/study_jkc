#include <stdio.h>

int main(void) {
	double weight, height, bmi;

	printf("몸무게(Weight)와 키(Height)를 순서대로 입력하시오: ");
	scanf("%lf%lf", &weight, &height);

	bmi = weight / (height*0.1 * height*0.1);

	(20.0 <= bmi <= 25.0) ? printf("표준입니다.") : printf("체중관리가 필요합니다.");

	return 0;
}