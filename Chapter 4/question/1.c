#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double x;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &x);

	printf("�Ǽ��������δ� %lf�Դϴ�\n",x);
	printf("�����������δ� %e�Դϴ�",x);

	return 0;
}