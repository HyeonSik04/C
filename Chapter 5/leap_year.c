#include <stdio.h>

int main() {
	int year;
	
	printf("연도를 입력하시오 : ");
	scanf("%d", &year);

	((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) ? printf("윤년입니다.") : printf("윤년이 아닙니다.");

	return 0;
}
