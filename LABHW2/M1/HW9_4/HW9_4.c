#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, i, j;

	n = 2;
	i = 1;
	do
	{
		for (j = 2; j <= n; j++)
			if (n % j == 0)
				break;
		if (j == n)
		{
			printf("%d번째 소수는 %d\n", i, n);
			i++;
		}
		n++;
	} while (i <= 10);
}