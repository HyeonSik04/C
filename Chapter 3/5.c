#include <stdio.h>

int main() {
	double x, polynomial;

	printf("실수를 입력하시오: ");
	scanf("%lf", &x);

	polynomial = 3 * x * x + 7 * x + 11;

	printf("다항식의 값은 %.2lf", polynomial);

	return 0;
}
