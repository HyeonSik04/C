#include <stdio.h>

int main() {
	double x, polynomial;

	printf("실수를 입력하시오: "); //x 값 받기
	scanf("%lf", &x);


	polynomial = 3 * x * x + 7 * x + 11; //받은 x값으로 다항식 계산

	printf("다항식의 값은 %.2lf", polynomial); //다항식의 값 출력

	return 0;
}
