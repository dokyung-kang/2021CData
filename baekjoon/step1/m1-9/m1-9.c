#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b;
	int sum, min, mul, div, res;

	scanf("%d %d", &a, &b);
	sum = a + b;
	min = a - b;
	mul = a * b;
	div = a / b;
	res = a % b;
	printf("%d\n", sum);
	printf("%d\n", min);
	printf("%d\n", mul);
	printf("%d\n", div);
	printf("%d\n", res);
}