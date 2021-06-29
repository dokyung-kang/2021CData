#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b, n1, n2, n3;

	scanf("%d %d", &a, &b);
	n1 = b % 10;
	n2 = b / 10 % 10;
	n3 = b / 100;
	printf("%d\n", a * n1);
	printf("%d\n", a * n2);
	printf("%d\n", a * n3);
	printf("%d\n", a * b);
}