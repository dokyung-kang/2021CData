#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b, c, n, totalSold = 0, totalCost = 0;

	scanf("%d %d %d", &a, &b, &c);


	for (n = 1; totalSold < totalCost; n++)
	{
		totalSold = c * n;
		totalCost = a + b * n;
	}
	printf("%d", n);
}