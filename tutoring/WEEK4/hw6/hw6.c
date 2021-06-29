#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>
long long pow(int n1, int n2);
int main()
{
	int a, n;
	scanf("%d%d", &a, &n);
	printf("%lld\n", pow(a, n));
}
long long pow(int n1, int n2)
{
	long long result = 1;
	if (n1 == 1)
		result = 1;
	else
	{
		for (int i = 1; i <= n2; i++)
			result *= n1;
	}
	return result;
}