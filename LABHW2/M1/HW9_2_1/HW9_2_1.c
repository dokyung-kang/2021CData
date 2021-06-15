#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int score;
	double avg;
	int max = -1;
	int total = 0;
	int n = 0;
	printf("Enter a score(-1 for exit): ");
	scanf("%d", &score);
	while (score != -1)
	{
		if (score > max)
			max = score;
		total += score;
		n++;
		printf("Enter a score(-1 for exit): ");
		scanf("%d", &score);
	}
	avg = (double)total / n;
	printf("You've entered %d students.\n", n);
	if (n == 0)
		printf("There is no data.");
	else
	{
		printf("The total is %d\n", total);
		printf("The average is %.1f\n", avg);
		printf("The best score is %d\n", max);
	}
}