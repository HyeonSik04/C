#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double F, C;

	printf("È­¾¾ °ªÀ» ÀÔ·ÂÇÏ½Ã¿À: "); //È­¾¾ °ª ¹Þ±â
	scanf("%lf", &F);

	C = (F - 32)*5/9; //¼·¾¾ °è»ê

	printf("¼·¾¾°ªÀº %.2lfµµ ÀÔ´Ï´Ù.", C); //¼·¾¾ Ãâ·Â

	return 0;
}