#include<stdio.h>
int main()
{
    int N;
    int min = 1000001,max = -1000001, i, A;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &A);
		if (A > max) {
			max = A;
		}
		
		if (A < min) {
			min = A;
		}
	}
	printf("%d %d", min, max);
    return 0;
}