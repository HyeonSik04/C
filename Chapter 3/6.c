#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double weight,moon_weight; 

	printf("�����Ը� �Է��Ͻÿ�(����: kg): "); //������ �Է¹ޱ�
	scanf("%lf", &weight);

	moon_weight = 70 * 0.17; //�޿����� ������ ���

	printf("�޿����� �����Դ� %.2lf�Դϴ�.", moon_weight); //�޿����� ������ ���

	return 0;
}