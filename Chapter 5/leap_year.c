#include <stdio.h>

int main() {
	int year;
  
	printf("년도를 입력하시오 : ");
	scanf("%d", &year);
  
	((year % 4 == 0) && (year / 100 != 0) || (year / 400 == 0)) ? printf("%d년도는 윤년입니다", year) : printf("%d년도는 윤년이 아닙니다", year);
  
	return 0;
}
