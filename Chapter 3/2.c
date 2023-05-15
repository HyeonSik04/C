#include <stdio.h>

int main() {
	double mile,meter;

	printf("마일을 입력하시오: "); //마일 값 받기
	scanf("%lf", &mile);

	meter = mile * 1609; //미터 계산

	printf("%.1lf 마일은 %.2lf미터 입니다", mile, meter); //입력 받은 마일 값과 계산된 미터 값 출력

	return 0;
}
