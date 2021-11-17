#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print_add(int a, int b);
int multiply(int a, int b);
int main(void)
{
	int x = 10;
	int y = 20;
	int result;

	print_add(x, y);

	result = multiply(x, y);

	printf("main함수: %d와 %d의 곱은 %d입니다. \n", x, y, result);
}

void print_add(int a, int b)
{
	int sum;
	sum = a + b;
	printf("print_add함수: %d와 %d의 합은 %d입니다.\n", a, b, sum);
	printf("print_add합수가 수행되었습니다.\n\n");

	return;
}

int multiply(int a, int b)
{
	int product;
	product = a * b;
	printf("add함수가 수행되었습니다.\n");

	return product;
}