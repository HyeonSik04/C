#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double F, C;

	printf("ȭ�� ���� �Է��Ͻÿ�: "); //ȭ�� �� �ޱ�
	scanf("%lf", &F);

	C = (F - 32)*5/9; //���� ���

	printf("�������� %.2lf�� �Դϴ�.", C); //���� ���

	return 0;
}