#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;

	scanf("%d", &n);

	if (n < 0)
	{
		printf("minus\n");
		if (n % 2 == 0)
			printf("even\n");
		else
			printf("odd\n");
	}
	else
	{
		printf("plus\n");
		if (n % 2 == 0)
			printf("even\n");
		else
			printf("odd\n");
	}
}