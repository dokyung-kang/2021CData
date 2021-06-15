#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int income[7];
	int i;
	int max = -1;
	for (i = 0; i < 7; i++)
	{
		printf("Enter the income: ");
		scanf("%d", &income[i]);
	}
	for (i = 0; i < 7; i++)
		if (max < income[i])
			max = income[i];
	printf("----------------------\n");
	printf("The best income is %d\n", max);
	printf("incomes are\n");
	for (i = 0; i < 7; i++)
		printf("%d ", income[i]);
}