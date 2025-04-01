#include<stdio.h>
int main()
{
	int i, A[9], max = 0, max_index = 0;
	for (i = 0; i < 9; i++) {
		scanf("%d", &A[i]);
		if (A[i] > max) {
			max = A[i];
			max_index = i;
		}
	}
	printf("%d\n%d", max, max_index+1) ;
}
