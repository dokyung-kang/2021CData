#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, row, column;

	printf("Enter the number of rows: ");
	scanf("%d", &row);
	printf("Enter the number of columns: ");
	scanf("%d", &column);

	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= column; j++)
			printf("%d", i);
		printf("\n");
	}
}