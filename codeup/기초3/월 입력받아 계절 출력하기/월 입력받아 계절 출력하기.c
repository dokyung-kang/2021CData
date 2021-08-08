#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;

	scanf("%d", &n);

	if (n == 12 || n == 1 || n == 2)
		printf("winter");
	else if (n == 3 || n == 4 || n == 5)
		printf("spring");
	else if (n == 6 || n == 7 || n == 8)
		printf("summer");
	else
		printf("fall");
}