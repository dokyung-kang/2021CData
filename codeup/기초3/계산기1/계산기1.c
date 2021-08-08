#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b;
	char op;
	double result;

	scanf("%d%c%d", &a, &op, &b);

	if (op == '+')
		result = a + b;
	else if (op == '-')
		result = a - b;
	else if (op == '*')
		result = a * b;
	else
		result = (double)a / b;

	if (op == '/')
		printf("%.2f", result);
	else
		printf("%.f", result);
}