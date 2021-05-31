#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n, unit;
	int sum = 0;

	scanf("%d %d", &n, &unit);

	n /= unit;
	n *= unit;

	for (i = 1; i <= n; i++)
	{
		sum += i;
		if (i % unit == 0)
		{
			printf("%d ", sum);
			sum = 0;
		}
	}
}