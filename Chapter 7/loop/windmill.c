#include <stdio.h>

int main() {
	int length;

	scanf("%d", &length);

	for (int i = 1; i <= length; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}

		for (int k = 1; k <= length - i; k++) {
			printf(" ");
		}

		for (int l = 0; l <= length - i; l++) {
			printf("*");
		}

		printf("\n");
	}
	
	for (int i = 1; i <= length; i++) {
		for (int j = 1; j <= length - i; j++) {
			printf(" ");
		}

		for (int k = 1; k <= i; k++) {
			printf("*");
		}

		for (int l = 1; l < i; l++) {
			printf(" ");
		}

		for (int m = 0; m <= length - i; m++) {
			printf("*");
		}

		printf("\n");
	}
	
	return 0;
}
