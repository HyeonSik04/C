#include <stdio.h>

int main() {
	double Mass, Speed, KEnergy;

	printf("Áú·®(kg): ");
	scanf("%lf", &Mass);

	printf("¼Óµµ(m/s) : ");
	scanf("%lf", &Speed);

	KEnergy = 0.5 * Mass * Speed * Speed;
	printf("¿îµ¿¿¡³ÊÁö(J): %lf", KEnergy);

	return 0;
}
