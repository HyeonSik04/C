#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double x, polynomial;

	printf("�Ǽ��� �Է��Ͻÿ�: "); //x �� �ޱ�
	scanf("%lf", &x);


	polynomial = 3 * x * x + 7 * x + 11; //���� x������ ���׽� ���

	printf("���׽��� ���� %.2lf", polynomial); //���׽��� �� ���

	return 0;
}