#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double ball;

	scanf("%lf", &ball);

	if (50 <= ball && ball <= 60)
		printf("win");
	else
		printf("lose");
}