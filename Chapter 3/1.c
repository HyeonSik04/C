#include <stdio.h>

int main() {
	double YearMoney, year;

	printf("연봉을 입력하시오(단위: 만원): ");
	scanf("%lf", &YearMoney);

	year = 100000 / YearMoney;

	printf("10억을 모으는데 걸리는 시간(단위: 년) : %.2lf", year);

	return 0;
}
