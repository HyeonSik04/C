#include <stdio.h>

int main() {
	int length, i, j, k;

	scanf("%d", &length);

	for (i = 1; i <= length; i++) {
		for (j = 1; j < i; j++) {
			printf(" ");
		}
		
		for (k = 0; k <= length - i; k++) {
			printf("*");
		}
		
		printf("\n");
	}

	return 0;
}
