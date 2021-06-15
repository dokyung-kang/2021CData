#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printManyStars(int starNum);
int main(void)
{
	int n1, n2;

	printf("Tom's score? ");
	scanf("%d", &n1);
	printf("Mary's score? ");
	scanf("%d", &n2);

	printf("---------- Score Histogram ----------\n");

	printf("Tom\t:");
	printManyStars(n1);
	printf("Mary\t:");
	printManyStars(n2);

	return 0;
}
void printManyStars(int starNum)
{
	int i;
	for (i = 1; i <= starNum; i++)
		printf("*");
	printf("<%02d>", starNum);
	printf("\n");
}