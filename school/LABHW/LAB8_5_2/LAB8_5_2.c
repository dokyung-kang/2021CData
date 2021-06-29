#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, row, column;

	printf("Enter the number of rows: ");
	scanf("%d", &row);
	printf("Enter the number of columns: ");
	scanf("%d", &column);

	i = 1;
	while (i <= row)
	{
		j = 1;
		while (j <= column)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
}