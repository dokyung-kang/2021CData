#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int num[100];
	int n, i, avg, total = 0;

	srand(time(NULL));

	printf("Enter the number of random numbers:(<= 100) ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		num[i] = rand() % 100;
		total += num[i];
	}
	if (n == 0)
		avg = 0;
	else
		avg = total / n;
	printf("발생된 난수는\n");
	for (i = 0; i < n; i++)
	{
		printf("%5d ", num[i]);
		if (i % 5 == 4)
			printf("\n");
	}
}