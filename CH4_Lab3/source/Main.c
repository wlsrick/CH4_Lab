#include <stdio.h>
#include <stdlib.h>

void main() {
	int x = 100;
	int y = addbyone(&x);
	printf("x=%d\n", x);
	system("pause");
}
int addbyone(int* z) {
	(*z)++;
	printf("*z=%d\n", *z);
	return *z;
}