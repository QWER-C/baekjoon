#include <stdio.h>
int main()
{
	int n, i, j, k, R;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		j = 0;
		char S[21] = { 0 };
		scanf("%d", &R);
		scanf(" %s", &S);
		for (;;){
			if (S[j] == 0) break;
			for (k = 0; k < R; k++) {
				printf("%c", S[j]);
			}
			j++;
		}
		printf("\n");
	}
}
