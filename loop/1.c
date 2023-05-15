#include <stdio.h>

int main() {
	int length, i, j;
	
	scanf("%d", &length);

	for (i = 1; i <= length; i++) {
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
}
