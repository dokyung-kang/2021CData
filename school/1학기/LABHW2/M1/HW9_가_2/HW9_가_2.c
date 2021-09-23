#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, k, n;

	printf("Enter a number: ");
	scanf("%d", &n);

	if (n % 2 == 0)
	{
		for (i = 0; i < n / 2; i++)
		{
			for (k = 0; k < i; k++)
				printf(" ");
			for (j = 0; j < n - 2 * i; j++)
				printf("*");
			printf("\n");
		}
	}
	else
	{
		for (i = 0; i < n / 2 + 1; i++)
		{
			for (k = 0; k < i; k++)
				printf(" ");
			for (j = 0; j < n - 2 * i; j++)
				printf("*");
			printf("\n");
		}
	}
}