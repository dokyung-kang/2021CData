#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, i, score;
	int total = 0;
	double avg;

	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		scanf("%d", &score);
		total += score;
	}
	avg = (double)total / num;
	printf("%d\n", total);
	printf("%.1f\n", avg);
}