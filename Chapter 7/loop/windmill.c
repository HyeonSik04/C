#include <stdio.h>

int main() {
	int length, j, k, l, m;

	scanf("%d", &length);

	for (int i = 1; i <= length; i++) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}

		for (k = 1; k <= length - i; k++) {
			printf(" ");
		}

		for (l = 0; l <= length - i; l++) {
			printf("*");
		}

		printf("\n");
	}
	
	for (int i = 1; i <= length; i++) {
		for (j = 1; j <= length - i; j++) {
			printf(" ");
		}

		for (k = 1; k <= i; k++) {
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
