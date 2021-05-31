#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int m, n, i;
	int sum = 0;

	scanf("%d %d", &m, &n);


	while (m <= n)
	{
		i = 2;
		while (i <= m)
		{
			if (m % i == 0)
				break;
			i++;
		}
		if (i == m)
			sum += m;
		m++;
	}
	printf("%d", sum);
}