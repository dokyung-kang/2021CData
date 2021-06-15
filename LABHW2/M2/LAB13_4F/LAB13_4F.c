#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int n[10];
	int i, j, temp = 0;
	srand(time(NULL));

	for (i = 0; i < 10; i++)
		n[i] = rand() % 100;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9 - i; j++)
			if (n[j] > n[j + 1])
			{
				temp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = temp;
			}
	}
	for (i = 0; i < 10; i++)
		printf("%d ", n[i]);
}