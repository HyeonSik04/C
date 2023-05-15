#include <stdio.h>

int main() {
	double weight,moon_weight; 

	printf("몸무게를 입력하시오(단위: kg): ");
	scanf("%lf", &weight);

	moon_weight = 70 * 0.17;

	printf("달에서의 몸무게는 %.2lf입니다.", moon_weight);

	return 0;
}
