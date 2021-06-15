#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printSumToN(int m, int n);
int main(void)
{
	int m, n;

	printf("Enter tow numbers : ");
	scanf("%d %d", &m, &n);

	printSumToN(m, n);
}
void printSumToN(int m, int n)
{
	int i;
	int total = 0;
	for (i = m; i <= n; i++)
		total += i;
	printf("%d ~ %dÀÇ ÇÕ: %d", m, n, total);

	return;
}