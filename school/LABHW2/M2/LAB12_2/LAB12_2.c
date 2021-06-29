#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int score[10];
	int i;
	int avg;
	int total = 0;

	srand(time(NULL));

	for (i = 0; i < 10; i++)
		score[i] = rand() % 100;
	for (i = 0; i < 10; i++)
		total += score[i];
	avg = total / 10;
	printf("Æò±ÕÀº %d\n", avg);
	for (i = 0; i < 10; i++)
		printf("%d ", score[i]);
}