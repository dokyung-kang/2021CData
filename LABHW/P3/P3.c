#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int score, i;
	int total = 0;

	for (i = 1; ; i++)
	{
		scanf("%d", &score);
		if (score == -1)
			break;
		total += score;
	}
	printf("%d", total);
}