#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int year, result;
	printf("년도를 입력하시오 : ");
	scanf("%d", &year);
	result = (year % 4 == 0) && (year / 100 != 0) || (year / 400 == 0);
	(result == 1) ? printf("%d년도는 윤년입니다", year) : printf("%d년도는 윤년이 아닙니다", year);
	return 0;
}