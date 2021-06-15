#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print_divisor(int n);
int main(void)
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	print_divisor(n);
}
void print_divisor(int n)
{
	int i;
	for (i = 1; i <= n; i++)
		if (n % i == 0)
			printf("%d\n", i);

	return;
}