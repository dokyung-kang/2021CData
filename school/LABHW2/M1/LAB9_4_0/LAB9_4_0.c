#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	do
	{
		printf("Enter a number(���): ");
		scanf("%d", &n);
	} while (n <= 0);
	printf("�Էµ� ����� %d", n);
}