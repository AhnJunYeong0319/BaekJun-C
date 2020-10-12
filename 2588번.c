#include <stdio.h>

int main(void) {
	int one, two, three, four, five;
	scanf("%d", &one);
	scanf("%d", &two);

	three = one * (two % 10);
	five = one * (two / 100);
	four = one * ((two - (two / 100) * 100 - (two % 10)) / 10);

	printf("%d\n%d\n%d\n%d",three,four,five, one * two);
	return 0;
}