#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sumToN(int m, int n);
int main(void)
{
	printf("%d 부터 %d까지의 합은 %d\n", 2, 5, sumToN(2, 5));
	printf("%d 부터 %d까지의 합은 %d\n", 2, 5, sumToN(3, 7));
	printf("%d 부터 %d까지의 합은 %d\n", 2, 5, sumToN(2, 10));
}
int sumToN(int m, int n)
{
	int i, total = 0;
	for (i = m; i <= n; i++)
		total += i;
	return total;
}