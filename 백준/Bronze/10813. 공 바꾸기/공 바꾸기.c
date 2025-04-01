#include<stdio.h>
int main()
{
	int N, M, i, j, k;
	int a[100] = { 0 };
	scanf("%d %d", &N, &M);
	for (i = 0; i < N; i++) {
		a[i] = i+1;
	}
	
	for (i = 0; i < M; i++) {
		int temp = 0;
		scanf("%d %d", &j, &k);
		temp = a[j-1];
		a[j - 1] = a[k - 1];
		a[k - 1] = temp;
	}

	for (i = 0; i < N; i++) {
		printf("%d ", a[i]);
	}
}
