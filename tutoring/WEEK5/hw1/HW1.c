#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long int f(int num);
int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%lld\n", f(n));
}
long long int f(int num)
{
	int i;
	long long int total = 1;
	for (i = 1; i <= num; i++)
		total *= i;
	return total;
}
