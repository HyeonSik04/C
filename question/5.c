#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SQUAREMETER 3.3058

int main() {
	double x, Meter;
	printf("����� �Է��ϼ���: ");
	scanf("%lf", &x);

	Meter = x * SQUAREMETER;
	printf("%lf�������Դϴ�.", Meter);
	return 0;
}