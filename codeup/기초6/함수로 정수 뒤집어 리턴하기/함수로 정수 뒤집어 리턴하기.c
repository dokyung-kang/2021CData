#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long int n;

long long int f(long long int N)
{
	int i;
	long long int result = 0;
	
	for (i = 1; n != 0; i++)
	{
		result = result * 10 + n % 10;
		n /= 10;
	}
	return result;
}
int main()
{
	scanf("%lld", &n);
	printf("%lld\n", f(n));
}