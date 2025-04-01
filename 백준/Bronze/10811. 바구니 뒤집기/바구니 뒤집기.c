#include<stdio.h>
int main()
{
	int N, a[100], M, i, j, k, temp;
	scanf("%d %d", &N, &M);
	for (k = 0; k < N; k++) {
		a[k] = k + 1;
	}
	

	for (k = 0; k < M; k++) {
		scanf("%d %d", &i, &j);
		for (;;) {
			if (i > j) break;
			temp = a[i - 1];
			a[i - 1] = a[j - 1];
			a[j - 1] = temp;
			i++, j--;
		}
	}
	for (i = 0; i < N; i++) {
		printf("%d ", a[i]);
	}
}
