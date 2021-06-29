#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, k, n;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
	for (i = n - 1; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
}