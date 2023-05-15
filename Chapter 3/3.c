#include <stdio.h>

int main() {
	double Width, Height, Size;

	printf("삼각형의 밑변: ");
	scanf("%lf", &Width);

	printf("삼각형의 높이: ");
	scanf("%lf",&Height);

	Size = Width * Height/2;

	printf("삼각형의 넓이: %.2lf",Size);

	return 0;
}
