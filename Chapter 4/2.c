#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x;

	printf("16���� ������ �Է��Ͻÿ�: ");
	scanf("%x", &x);

	printf("8�����δ� %#o\n",x);
	printf("10�����δ� %d\n",x);
	printf("16�����δ� %#x",x);

	return 0;
}