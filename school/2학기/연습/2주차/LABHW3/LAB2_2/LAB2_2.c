#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num;
	int i;
	int total;
	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	printf("Enter a number: ");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
		array[i] *= 10;

	total = 0;
	i = 0;
	while (i < num)
	{
		total += array[i];
		i++;
	}
	printf("Total is %d\n", total);
}