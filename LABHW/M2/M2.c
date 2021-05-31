#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n;
	int sum = 0;

	scanf("%d", &n);

	i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			sum += i;
		i++;
	}
	printf("%d", sum);
}