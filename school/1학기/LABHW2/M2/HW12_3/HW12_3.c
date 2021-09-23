#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int incomes[7];
	int i, bestIndex, best = 0, total = 0;
	double avg;

	for (i = 0; i < 7; i++)
	{
		printf("Enter the income of day %d: ", i + 1);
		scanf("%d", &incomes[i]);
		total += incomes[i];
	}
	avg = (double)total / 7;
	for (i = 0; i < 7; i++)
		if (best < incomes[i])
		{
			best = incomes[i];
			bestIndex = i + 1;
		}
	printf("------------------------\n");
	printf("The best incomes: %d in day %d\n", best, bestIndex);
	printf("------------------------\n");
	printf("the total is %d\n", total);
	printf("The average is %.1f\n", avg);
	printf("The good days and their incomes are\n");
	for (i = 0; i < 7; i++)
		if (incomes[i] > avg)
			printf("day %d: %d\n", i + 1, incomes[i]);
}