#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j;
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i; j++)
			printf("*");
		printf("\n");
	}
}