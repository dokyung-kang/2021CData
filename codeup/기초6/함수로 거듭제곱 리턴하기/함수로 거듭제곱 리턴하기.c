#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a, n;

long long int pow(int a, int n)
{
	int i;
	long long int result = 1;
	if (a == 1)
		result = 1;
	else
	{
		for (i = 1; i <= n; i++)
			result *= a;
	}
	return result;
}
int main()
{
	scanf("%d%d", &a, &n);
	printf("%lld\n", pow(a, n));
}