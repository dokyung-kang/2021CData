#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int prime(int n);
int main(void)
{
	int n;
	int i;
	int flag = 0;

	scanf("%d", &n);

	for (i = 1; i <= n / 2; i++)
		if (n % i == 0)
			if (prime(i) && prime(n / i))
			{
				printf("%d %d", i, n / i);
				flag = 1;
				break;
			}
			
	if (flag == 0)
		printf("wrong number");
}
int prime(int n)
{
	int i;

	if (n == 1)
		return 0;
	else
	{
		for (i = 1; i <= n; i++)
			if (n % i == 0 && i != 1 && i != n)
				return 0;
	}
	return 1;
}