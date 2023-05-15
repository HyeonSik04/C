#include <stdio.h>

int main() {
	double weight,moon_weight; 

	printf("몸무게를 입력하시오(단위: kg): "); //몸무게 입력받기
	scanf("%lf", &weight);

	moon_weight = 70 * 0.17; //달에서의 몸무게 계산

	printf("달에서의 몸무게는 %.2lf입니다.", moon_weight); //달에서의 몸무게 출력

	return 0;
}
