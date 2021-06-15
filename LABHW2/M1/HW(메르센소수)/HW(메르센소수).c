#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long twoToPower(int n)
{
	int i;
	long long int total = 1;
	for (i = 1; i <= n; i++)
		total *= 2;
	return total;
}
long long isPrime(long long x)
{
	long long i;
	for (i = 2; i < x; i++)
		if (x % i == 0)
			return 0;
	return 1;
}
int main(void)
{
	int i, n;
	long long a;
	printf("Enter a number: ");
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		a = twoToPower(i) - 1;
		if (isPrime(a))
			printf("(2^%d - 1) = %d은 메르센 소수이다.\n", i, a);
	}
}