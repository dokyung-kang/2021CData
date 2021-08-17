#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, n, c;
	int temp;
	int a[10000];

	scanf("%d %d", &n, &c);

	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (i = 0; i < n; i++)
		for (j = 0; j < n - i - 1; j++)
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
	
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
		if ((i + 1) % c == 0)
			printf("\n");
	}
}