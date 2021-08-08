#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, n1, n2, num;

	scanf("%d", &n);

	n1 = n / 10;
	n2 = n % 10;
	num = n2 * 10 + n1;
	num *= 2;

	if (num >= 100)
		num %= 100;
	printf("%d\n", num);

	if (num <= 50)
		printf("GOOD");
	else
		printf("OH MY GOD");
}