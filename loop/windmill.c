#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int length, i, j, k, l, m;

	scanf("%d", &length);

	for (i = 1; i <= length; i++) {
		for (j = 0; j < i; j++) {
			printf("*");
		}

		for (k = 0; k < length - i; k++) {
			printf(" ");
		}

		for (l = 0; l <= length - i; l++) {
			printf("*");
		}

		printf("\n");
	}
	
	for (i = 1; i <= length; i++) {
		for (j = 0; j < length - i; j++) {
			printf(" ");
		}

		for (k = 0; k < i; k++) {
			printf("*");
		}

		for (l = 1; l < i; l++) {
			printf(" ");
		}

		for (m = 0; m <= length - i; m++) {
			printf("*");
		}

		printf("\n");
	}
	
	return 0;
}