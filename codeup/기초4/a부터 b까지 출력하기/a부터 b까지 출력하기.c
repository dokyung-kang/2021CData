#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b;
	int n1, n2;
	int i;

	scanf("%d %d", &a, &b);
	if (a <= b)
	{
		n1 = a;
		n2 = b;
	}
	else
	{
		n1 = b;
		n2 = a;
	}
	for (i = n1; i <= n2; i++)
		printf("%d ", i);
}