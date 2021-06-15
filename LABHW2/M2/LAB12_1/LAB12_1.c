#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int score[40];
	int total = 0;
	int avg;
	int i;
	int n;
	printf("Enter the number of scores(0 < number <= 40): ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Enter a score: ");
		scanf("%d", &score[i]);
	}
	printf("-----------------------------------\n");
	for (i = 0; i < n; i++)
		total += score[i];
	if (n == 0)
		avg = 0;
	else
		avg = total / n;
	printf("Total: %d\n", total);
	printf("Average: %d\n", avg);
	for (i = 0; i < n; i++)
		printf("%d ", score[i]);
	return 0;
}