#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double Width, Height, Size;

	printf("삼각형의 밑변: "); //삼각형 밑변 받기
	scanf("%lf", &Width);

	printf("삼각형의 높이: "); //삼각형 높이 받기
	scanf("%lf",&Height);

	Size = Width * Height/2; //삼각형 넓이 계산

	printf("삼각형의 넓이: %.2lf",Size); //넓이 출력

	return 0;
}