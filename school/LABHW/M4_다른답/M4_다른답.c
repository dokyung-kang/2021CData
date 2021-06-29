#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int m, n, i, j, prime;
	int total = 0;

	scanf("%d %d", &m, &n);

	prime = 1;
	for (i = m; i <= n; i++)
	{
		prime = 1;
		for (j = 2; j <= i - 1; j++)
		{
			if (i % j == 0)
			{
				prime = 0;
				break;
			}
		}
		if (prime = 1)
			total += i;
	}
	printf("%d", total);
}