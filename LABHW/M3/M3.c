#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, count;

	scanf("%d", &num);

	count = 0;
	while (num != 0) //n > 0
	{
		num /= 10;
		count++;
	}
	printf("%d", count);
}