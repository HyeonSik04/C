#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double Width, Length, Height, Volum;

	printf("������ ���� ���� ���̸� �ѹ��� �Է�: ");
	scanf("%lf %lf %lf", &Width, &Length, &Height);

	Volum = Width * Length * Height;
	printf("������ ���Ǵ� %lf�Դϴ�.", Volum);

	return 0;
}