#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num;
	int total = 1;

	printf("Enter a number: ");
	scanf("%d", &num);

	i = 1;
	while (i <= num)
	{
		total *= i;
		i++;
	}
	printf("%d의 Factorial 값은 %d이다.\n", num, total);
}