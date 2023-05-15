#include <stdio.h>

int main() {
	double mile,meter;

	printf("마일을 입력하시오: ");
	scanf("%lf", &mile);

	meter = mile * 1609;

	printf("%.1lf 마일은 %.2lf미터 입니다", mile, meter);

	return 0;
}
