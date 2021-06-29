#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long int f(int num);
int main(void)
{
	long long int n;
	scanf("%lld", &n);
	printf("%lld\n", f(n));
}
long long int f(long long int num)
{
	while (num >= 10)
	{
		printf("%lld", num % 10);
		num /= 10;
	}
	return num;
}