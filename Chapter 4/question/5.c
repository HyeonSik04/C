#include <stdio.h>
#define SQUAREMETER 3.3058

int main() {
	double x, result;

	printf("평수를 입력하세요: ");
	scanf("%lf", &x);

	result = x * SQUAREMETER;
	printf("%lf평방미터입니다.", result);

	return 0;
}
