#include <stdio.h>

int main() {
	double F, C;

	printf("화씨 값을 입력하시오: "); //화씨 값 받기
	scanf("%lf", &F);

	C = (F - 32)*5/9; //섭씨 계산

	printf("섭씨값은 %.2lf도 입니다.", C); //섭씨 출력

	return 0;
}
