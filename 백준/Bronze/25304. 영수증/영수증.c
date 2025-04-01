#include <stdio.h>
int main(void) {
	int X, N, a, b, i, sum = 0;
	scanf("%d %d", &X, &N);
	for (i = 0; i < N; i++) {
		scanf("%d %d", &a, &b);
		sum = sum + a * b;
	}
	(sum == X) ? printf("Yes") : printf("No");
}