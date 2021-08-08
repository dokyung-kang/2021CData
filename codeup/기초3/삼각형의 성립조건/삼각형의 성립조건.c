#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (a >= b && a >= c)
	{
		if (b + c > a)
			printf("yes");
		else
			printf("no");
	}
	else if (b >= a && b >= c)
	{
		if (a + c > b)
			printf("yes");
		else
			printf("no");
	}
	else
	{
		if (a + b > c)
			printf("yes");
		else
			printf("no");
	}
}