#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, k, n;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		if (i % 3 == 0 || i % 5 == 0)
			printf("%d", i);
}