#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double Mass, Speed, KEnergy;

	printf("����(kg): ");
	scanf("%lf", &Mass);

	printf("�ӵ�(m/s) : ");
	scanf("%lf", &Speed);

	KEnergy = 0.5 * Mass * Speed * Speed;
	printf("�������(J): %lf", KEnergy);

	return 0;
}