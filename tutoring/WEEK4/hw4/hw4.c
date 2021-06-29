#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long f(int k);
int main()
{
	int n;
	scanf("%d", &n);
	printf("%lld\n", f(n));
}
long long f(int k)
{
	long long result = 0;
	for (int i = 1;	i <= k; i++)
		result += i;
	return result;
}