#include <stdio.h>

int main() {
	int length;

	scanf("%d", &length);

	for (int i = 1; i <= length; i++) {
		for (j = 1; j <= length - i; j++) {
			printf(" ");
		}
    
		for (int k = 1; k <= i * 2 - 1; k++) {
			printf("*");
		}
    
		printf("\n");
	}
  
	for (int i = 1; i <= length - 1; i++) {
		for (int j = 1; j <= i; j++) {
			printf(" ");
		}
    
		for (int k = 1; k <= (length - i) * 2 - 1; k++) {
			printf("*");
		}
    
		printf("\n");
	}

	return 0;
}
