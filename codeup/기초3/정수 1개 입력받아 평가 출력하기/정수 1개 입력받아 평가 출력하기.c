#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;

	scanf("%d", &n);

	if (n >= 90)
		printf("A");
	else if (n >= 70)
		printf("B");
	else if (n >= 40)
		printf("C");
	else
		printf("D");
}