#include<stdio.h>
int main(void) {
	int i, j, k, N;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		for (j = 0; j <N - i - 1; j++) {
			printf(" ");
		}
		for (k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}