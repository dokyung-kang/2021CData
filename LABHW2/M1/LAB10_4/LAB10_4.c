#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printSumToN(int a);
int main(void)
{
	int n;

	printf("Enter a number : ");
	scanf("%d", &n);

	printSumToN(n);

	return 0;
}
void printSumToN(int a)
{
	int i;
	int total = 0;

	for (i = 1; i <= a; i++)
		total += i;
	printf("1~%dÀÇ ÇÕ: %d", a, total);

	return;
}
