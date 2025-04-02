#include <stdio.h>
int main()
{
	char n[101], i = 0, j;
	int a[27] = { 0 };
	scanf("%s", &n);
	for (;;) {
		if (n[i] == 0) break;
		for (j = 0; j <= 25; j++) {
			if (a[j] == 0 && n[i] == 'a'+j) a[j] = i+1;
		}
		i++;
	}
	for (i = 0; i < 26; i++) {
		a[i]--;
	}

	for (i = 0; i < 26; i++) {
		printf("%d ", a[i]);
	}
}
