#include <stdio.h>
int main()
{
	char x[1000002];
	int y[26] = { 0 }, max = 0, max_index = 0, i = 0 , j;
	scanf("%s", &x);

	int len = strlen(x);
	for (i = 0; i < len; i++) {
		if (x[i] == 0) break;
		if (x[i] <= 'Z') {
			y[x[i] - 'A']++;
		}
		else y[x[i] - 'a']++;

	}

	for (j = 0; j < 26; j++) {
		if (y[j] > max) {
			max = y[j];
			max_index = j;
		}
	}

	for (j = 0; j < 26; j++) {
		if (j != max_index && y[j] == max) {
			printf("?");
			return 0;
		}
	}
	printf("%c", max_index + 'A');
}
