#include <stdio.h>

int main(void) {
	int A, B;
	scanf("%d %d", &A, &B);
	printf("%.12lf", (double)A / (double)B);
}