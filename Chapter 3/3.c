#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double Width, Height, Size;

	printf("�ﰢ���� �غ�: "); //�ﰢ�� �غ� �ޱ�
	scanf("%lf", &Width);

	printf("�ﰢ���� ����: "); //�ﰢ�� ���� �ޱ�
	scanf("%lf",&Height);

	Size = Width * Height/2; //�ﰢ�� ���� ���

	printf("�ﰢ���� ����: %.2lf",Size); //���� ���

	return 0;
}