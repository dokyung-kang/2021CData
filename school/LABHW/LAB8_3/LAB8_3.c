#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num, even, integer;

	printf("Enter the # of integers: ");
	scanf("%d", &num);

	even = 0;
	for (i = 1; i <= num; i++)
	{
		printf("Enter an integer: ");
		scanf("%d", &integer);

		if (integer % 2 == 0)
			even++;
	}
	printf("The number of even numbers is %d.", even);
}