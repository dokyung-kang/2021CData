#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int m, n, i, j;
	int total = 0;

	scanf("%d %d", &m, &n);


	for (i = m; i <= n; i++)
	{
		for (j = 2; j <= i - 1; j++)
			if (i % j == 0)
				break;
		if (j == i)
			total += i;
	}
	printf("%d", total);
}