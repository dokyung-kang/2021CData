#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, n, m, temp;
	int num[10000001];

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		num[temp] = temp;
	}
	scanf("%d", &m);
	for (i = 0; i < m; i++)
	{
		scanf("%d", &temp);
		if (num[temp] == NULL)
			printf("0 ");
		else
			printf("1 ");
	}



}