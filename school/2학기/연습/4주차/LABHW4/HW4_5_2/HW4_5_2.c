#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int gcd(int n)
{
	printf("%d ", n);
	if (n == 1)
		return 1;
	else if (n % 2 == 0)
		return gcd(n / 2) + 1;
	else
		return gcd(n * 3 + 1) + 1;
}
int main(void)
{
	int n;
	scanf("%d", &n);
	printf("\n%d", gcd(n));
}