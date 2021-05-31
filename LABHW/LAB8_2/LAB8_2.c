#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num, product;

	printf("Enter a number: ");
	scanf("%d", &num);

	for (i = 1; i <= 9; i++)
	{
		product = 6 * i;
		printf("6 * %d = %d\n", i, product);
	}
}