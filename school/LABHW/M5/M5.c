#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int deposit, target, i, year, month;
	int total = 0;

	scanf("%d %d", &deposit, &target);

	for (i = 0; total < target; i++)
		total = (total + deposit) * 1.02;
	year = i / 12;
	month = i % 12;
	printf("%d %d %d", year, month, total);
}