#include <stdio.h>

int main(void) {
	int hour, min, sec;
	double origin_time = 3.76;
	double time = origin_time;


	hour = (int)time;
	time -= hour;
	time *= 60;
	min = (int)time;
	time -= min;
	time *= 60;
	sec = (int)time;

	printf("%.2lf�ð��� %d�ð� %d�� %d���Դϴ�.", origin_time, hour, min, sec);

	return 0;
}