#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, i, j, k;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n - i; j++) {
			printf(" ");
		}
		for (k = 0; k < i * 2 - 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i <= n - 1; i++) {
		for (j = 1; j <= i; j++) {
			printf(" ");
		}
		for (k = 0; k < (n - i) * 2 - 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}