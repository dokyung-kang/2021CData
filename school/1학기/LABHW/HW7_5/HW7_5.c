#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num;

	printf("Enter a number: ");
	scanf("%d", &num);

	while (num != 0)
	{
		printf("%d", num % 2);
		num /= 2;
	}
}