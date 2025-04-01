#include<stdio.h>
int main(void) {
	int a[100], N, i, f, count = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &f);
	for (i = 0; i < N; i++) {
		if (f == a[i]) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}