#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num;
	int sum = 0, product = 1;

	printf("Enter a number: ");
	scanf("%d", &num);

	i = 1;
	while (i <= num)
	{
		sum += 3;
		product *= 3;
		i++;
	}
	printf("3�� %d�� ���� ���� %d�̴�.\n", num, sum);
	printf("3�� %d�� ���� ���� %d�̴�.\n", num, product);
}