#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int max = -1;
	int i, score;

	for (i = 1; i <= 5; i++)
	{
		printf("Enter a score: ");
		scanf("%d", &score);

		if (score > max)
			max = score;
	}
	printf("The best score is %d\n", max);
}