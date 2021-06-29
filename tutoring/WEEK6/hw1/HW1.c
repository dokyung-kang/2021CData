#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int k, i, j, num;
	int n[100];

	scanf("%d", &k);

	for (i = 0; i < k; i++)
	{
		scanf("%d", &num);
		n[i] = num;
	}
	for (j = 0; j < 2; j++)
	{
		for (i = 0; i < k; i++)
			printf("%d\n", n[i]);
	}
}