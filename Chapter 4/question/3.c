#include <stdio.h>

int main() {
	int x=10, y=20, tmp;

	printf("x=%d y=%d\n", x, y);

	tmp = x;
	x = y;
	y = tmp;
	printf("x=%d y=%d", x, y);

	return 0;
}