#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double YearMoney, year;

	printf("������ �Է��Ͻÿ�(����: ����): "); //���� �Է¹ޱ�
	scanf("%lf", &YearMoney);

	year = 100000 / YearMoney; //10���� �������� ���� 10�� ������ �ð� ���

	printf("10���� �����µ� �ɸ��� �ð�(����: ��) : %.2lf", year); //������ �ð� ���

	return 0;
}