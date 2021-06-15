#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n1, n2;

	printf("Tom's score? ");
	scanf("%d", &n1);
	printf("Marry's score? ");
	scanf("%d", &n2);

	printf("---------- score Histogram ----------\n");

	printf("Tom\t:");
	for (int i = 0; i < n1; i++)
		printf("*");
	printf("<%02d>", n1);
	printf("\n");

	printf("Marry\t:");
	for (int i = 0; i < n2; i++)
		printf("*");
	printf("<%02d>", n2);
}