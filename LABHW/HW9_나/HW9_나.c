#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i <= 30; i++)
	{
		sum += i;
		if (i % 5 == 0)
		{
			printf("%d - %d���� �� = %d\n", i - 4, i, sum);
			sum = 0;
		}

	}
}