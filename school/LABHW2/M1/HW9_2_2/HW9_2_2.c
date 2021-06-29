#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int score;
	int total = 0;
	int n = 0;
	double avg;
	int max = -1;

	while (1)
	{
		printf("Enter a score(-1 for exit): ");
		scanf("%d", &score);
		if (score == -1)
			break;
		if (max < score)
			max = score;
		total += score;
		n++;
	}
	avg = (double)total / n;
	printf("You've entered %d students.\n", n);
	if (n == 0)
		printf("There is no data.\n");
	else
	{
		printf("The total is %d\n", total);
		printf("The average is %.1f\n", avg);
		printf("The best score is %d", max);
	}
}