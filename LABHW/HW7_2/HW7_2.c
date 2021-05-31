#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char operator;
	int num1, num2, answer, total;

	printf("Enter an operator: ");
	scanf("%c", &operator);
	printf("Enter the first operand: ");
	scanf("%d", &num1);
	printf("Entere the second operand: ");
	scanf("%d", &num2);

	switch (operator)
	{
	case '+':
		total = num1 + num2;
		break;
	case '*':
		total = num1 * num2;
		break;
	case '-':
		total = num1 - num2;
		break;
	case '/':
		total = num1 / num2;
		break;
	}
	printf("%d %c %d = ", num1, operator, num2);
	scanf("%d", &answer);

	if (answer == total)
		printf("Right answer\n");
	else
	{
		printf("Wrong!\n");
		printf("%d is the right answer\n", total);
	}
}