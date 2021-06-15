#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int n1, n2;
	int total;
	int ans;

	srand(time(NULL));
	n1 = rand() % 100;
	n2 = rand() % 100;
	total = n1 + n2;
	
	printf("%d + %d = ", n1, n2);
	scanf("%d", &ans);
	if (ans == total)
		printf("Your answer is right.");
	else
	{
		printf("Your answer is wrong.\n");
		printf("%d is the right answer", total);
	}
}