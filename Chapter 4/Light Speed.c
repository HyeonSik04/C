#include <stdio.h>
#define C 300000
int main(void)
{
	double distance;
	int Secound, Minute, Hour, Day, RemainH, RemainS, RemainM;
	printf("�Ÿ��� �Է��Ͻÿ�(���� : km) : ");
	scanf("%lf", &distance);

	Secound = distance / C;

	if (Secound < 60) {
		printf("���� �� %d�ʰ� �ɸ��ϴ�.",Secound);
	} 
	else if (Secound >= 60) {
		Minute = Secound / 60;
		RemainS = Secound % 60;
		if (Minute < 60) {
			printf("���� �� %d�� %d�ʰ� �ɸ��ϴ�.", Minute, RemainS);
		}
		else if (Minute >= 60) {
			Hour = Minute / 60;
			RemainM = Minute % 60;
			if (Hour < 24) {
				printf("���� �� %d�ð� %d�� %d�ʰ� �ɸ��ϴ�.", Hour, RemainM, RemainS);
			}
			else if (Hour >= 24) {
				Day = Hour / 24;
				RemainH = Hour % 24;
				printf("���� �� %d�� %d�ð� %d�� %d�ʰ� �ɸ��ϴ�.", Day, RemainH, RemainM, RemainS);
			}
		}
	}
	return 0;
}