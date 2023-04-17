#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double Width, Length, Height, Volum;

	printf("상자의 가로 세로 높이를 한번에 입력: ");
	scanf("%lf %lf %lf", &Width, &Length, &Height);

	Volum = Width * Length * Height;
	printf("상자의 부피는 %lf입니다.", Volum);

	return 0;
}