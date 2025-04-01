#include<stdio.h>
int main()
{
	int i, a[42] = { 0 }, b;
	for(i = 0; i < 10; i++){
		scanf("%d", &b);
		if (a[b % 42] == 0) {
			a[b % 42]++;
		}
	}
	int sum = 0;
	for (i = 0; i < 42; i++) {
		sum = sum + a[i];
	}
	printf("%d", sum);
}
