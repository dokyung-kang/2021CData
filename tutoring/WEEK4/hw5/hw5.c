#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int gcd(int n1, int n2);
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d\n", gcd(a, b));
}
int gcd(int n1, int n2)
{
	int gcdn;
	for (int i = 1; i <= n1 || i <= n2; i++)
		if (n1 % i == 0 && n2 % i == 0)
			gcdn = i;
	return gcdn;
}