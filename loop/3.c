#include <stdio.h>

int main() {
	int length, i, j, k;

	scanf("%d", &length);

	for (i = 1; i <= length; i++) {
		for (j = 1; j <= length - i; j++) {
			printf(" ");
		}
    
		for (k = 1; k <= i * 2 - 1; k++) {
			printf("*");
		}
    
		printf("\n");
	}

	return 0;
}
