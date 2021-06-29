#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num, score;
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
	printf("The total is %d\n", total);
}