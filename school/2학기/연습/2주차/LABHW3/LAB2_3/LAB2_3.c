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

	printf("main�Լ�: %d�� %d�� ���� %d�Դϴ�. \n", x, y, result);
}

void print_add(int a, int b)
{
	int sum;
	sum = a + b;
	printf("print_add�Լ�: %d�� %d�� ���� %d�Դϴ�.\n", a, b, sum);
	printf("print_add�ռ��� ����Ǿ����ϴ�.\n\n");

	return;
}

int multiply(int a, int b)
{
	int product;
	product = a * b;
	printf("add�Լ��� ����Ǿ����ϴ�.\n");

	return product;
}