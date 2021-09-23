#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num;
	int product = 1;

	printf("Enter a number; ");
	scanf("%d", &num);

	for (i = 0; product < num; i++)
	{
		product *= 2;
		if (product > num)
			break;
	}
	printf("%d", i);
}