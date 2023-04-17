#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x;

	printf("16진수 정수를 입력하시오: ");
	scanf("%x", &x);

	printf("8진수로는 %#o\n",x);
	printf("10진수로는 %d\n",x);
	printf("16진수로는 %#x",x);

	return 0;
}