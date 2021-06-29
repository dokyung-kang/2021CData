#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num, total;

	printf("Enter a number: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		total = i * i * i;
		printf("%d\n", total);
	}
}