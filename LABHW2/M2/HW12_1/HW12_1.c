#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int score[20];
	int i, j, n;

	printf("Enter the number of score(<= 20): ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Enter a score: ");
		scanf("%d", &score[i]);
	}
	for (i = 0; i < 10; i++)
	{
		printf("student %d: ", score[i]);
		for (j = 0; j < score[i]; j++)
			printf("*");
		printf("\n");
	}
}