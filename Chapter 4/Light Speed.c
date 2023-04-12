#include <stdio.h>
#define C 300000
int main(void)
{
	double distance;
	int Secound, Minute, Hour, Day, RemainH, RemainS, RemainM;
	printf("거리를 입력하시오(단위 : km) : ");
	scanf("%lf", &distance);

	Secound = distance / C;

	if (Secound < 60) {
		printf("빛은 약 %d초가 걸립니다.",Secound);
	} 
	else if (Secound >= 60) {
		Minute = Secound / 60;
		RemainS = Secound % 60;
		if (Minute < 60) {
			printf("빛은 약 %d분 %d초가 걸립니다.", Minute, RemainS);
		}
		else if (Minute >= 60) {
			Hour = Minute / 60;
			RemainM = Minute % 60;
			if (Hour < 24) {
				printf("빛은 약 %d시간 %d분 %d초가 걸립니다.", Hour, RemainM, RemainS);
			}
			else if (Hour >= 24) {
				Day = Hour / 24;
				RemainH = Hour % 24;
				printf("빛은 약 %d일 %d시간 %d분 %d초가 걸립니다.", Day, RemainH, RemainM, RemainS);
			}
		}
	}
	return 0;
}