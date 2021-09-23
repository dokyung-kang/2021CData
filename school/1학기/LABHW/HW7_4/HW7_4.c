#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num, score;
	double avg;
	int total = 0;

	printf("Enter a student number: ");
	scanf("%d", &num);

	i = 1;
	while (i <= num)
	{
		printf("Enter a score: ");
		scanf("%d", &score);
		total += score;
		i++;
	}
	if (num == 0)
		avg = 0;
	else
		avg = (double)total / num;
	
	printf("The total is %d\n", total);
	printf("The average is %.1f\n", avg);
}