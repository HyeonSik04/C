#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SQUAREMETER 3.3058

int main() {
	double x, Meter;
	printf("평수를 입력하세요: ");
	scanf("%lf", &x);

	Meter = x * SQUAREMETER;
	printf("%lf평방미터입니다.", Meter);
	return 0;
}