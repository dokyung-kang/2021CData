#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int prime = 1, j, num = 2;
	while (prime <= 10)
	{
		j = 2;
		while (j < num)
		{
			if (num % j == 0)
				break;
			j++;
		}
		if (num == j)
		{
			printf("%d번째 소수는 %d\n", prime, num);
			prime++;
		}

		num++;
	}
}