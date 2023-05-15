#include <stdio.h>

int main() {
	double YearMoney, year;

	printf("연봉을 입력하시오(단위: 만원): "); //연봉 입력받기
	scanf("%lf", &YearMoney);

	year = 100000 / YearMoney; //10억을 연봉으로 나눠 10억 모으는 시간 계산

	printf("10억을 모으는데 걸리는 시간(단위: 년) : %.2lf", year); //모으는 시간 출력

	return 0;
}
