#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double Mass, Speed, Energy;
	printf("질량(kg): ");
	scanf("%lf", &Mass);

	printf("속도(m/s) : ");
	scanf("%lf", &Speed);

	Energy = 0.5 * Mass * Speed * Speed;
	printf("운동에너지(J): %lf", Energy);

	return 0;
}