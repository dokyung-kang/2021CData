#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int max = -1, min = 999;
	int i, score, num;

	printf("Enter the number of scores: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		printf("Enter a score: ");
		scanf("%d", &score);

		if (max <= score)
			max = score;
		if (min >= score)
			min = score;
	}
	if (num == 0)
		printf("no data.");
	else
	{
		printf("The best score is %d\n", max);
		printf("The worst score is %d\n", min);
	}

}