#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;

	scanf("%d", &n);

	if (n % 4 == 0)
	{
		if (n % 100 != 0)
			printf("yes");
		else if (n % 400 == 0)
			printf("yes");
		else
			printf("no");
	}
	else
		printf("no");
}