#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num, total;

	printf("Enter a number: ");
	scanf("%d", &num);

	i = 1;
	while (i <= num)
	{
		total = i * i * i;
		printf("%d\n", total);
		i++;
	}
}