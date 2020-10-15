#include <stdio.h>

main() {
	int A, B;
	while (0==0) {
		scanf("%d %d", &A, &B);
		if ((A == 0) & (B == 0)) {
			break;
		}
		else {
			printf("%d\n", A + B);
		}
	}
}