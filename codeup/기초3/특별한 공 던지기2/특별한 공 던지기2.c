#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int ball;

	scanf("%d", &ball);

	if (30 <= ball && ball <= 40)
		printf("win");
	else if (60 <= ball && ball <= 70)
		printf("win");
	else
		printf("lose");
}