#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n;

long long int f(long long int N)
{
	long long total = 0;
	int i;
	for (i = 1; i <= n; i++)
		total += i;
	return total;
}

int main()
{
	scanf("%d", &n);
	printf("%lld\n", f(n));
}