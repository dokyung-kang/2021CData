#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (a <= 170)
		printf("CRASH");
	else
	{
		if (b <= 170)
			printf("CRASH");
		else
		{
			if (c <= 170)
				printf("CRASH");
			else
				printf("PASS");
		}
	}
}