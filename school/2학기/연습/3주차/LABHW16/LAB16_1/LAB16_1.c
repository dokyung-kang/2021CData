#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int table[5][3] = { 0 };
	int i, j;
	int total = 0;

	printf("°¡>\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++)
			printf("%d ", table[i][j]);
		printf("\n");
	}

	printf("³ª>\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			table[i][j] = i + j;
			printf("%d ", table[i][j]);
			total += table[i][j];
		}
		printf("\n");
	}

	printf("µð>\n");
	printf("Total is %d", total);
}