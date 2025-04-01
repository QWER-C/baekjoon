#include<stdio.h>
int main()
{
	int a[30], i, n;
	for (i = 0; i < 30; i++) {
		a[i] = i + 1;
	}
	for (i = 0; i < 28; i++) {
		scanf("%d", &n);
		a[n - 1] += 100;
	}

	for (i = 0; i < 30; i++) {
		if (a[i] < 100) printf("%d\n", a[i]);
	}
}
