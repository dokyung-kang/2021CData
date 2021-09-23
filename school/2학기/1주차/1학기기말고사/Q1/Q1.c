#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num;
	int total = 0;

	scanf("%d", &num);
	while (num != -1)
	{
		for (i = 2; i < num; i++)
			if (num % i == 0)
				break;
		if (i == num)
			total += num;
		scanf("%d", &num);
	}
	printf("%d", total);
}