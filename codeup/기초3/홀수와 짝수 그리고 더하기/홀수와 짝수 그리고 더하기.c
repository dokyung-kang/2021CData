#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b;

	scanf("%d %d", &a, &b);

	if (a % 2 == 0)
	{
		printf("¦��+");
		if (b % 2 == 0)
			printf("¦��=¦��");
		else
			printf("Ȧ��=Ȧ��");
	}
	else
	{
		printf("Ȧ��+");
		if (b % 2 == 0)
			printf("¦��=Ȧ��");
		else
			printf("Ȧ��=¦��");
	}
}