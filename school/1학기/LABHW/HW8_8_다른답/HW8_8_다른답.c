#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num;
	int prime = 1;

	printf("Enter a number: ");
	scanf("%d", &num);

	for (i = 2; i <= num; i++)
		if (num % i == 0)
		{
			prime = 0;
			break;
		}

	if (prime == 1)
		printf("�Ҽ��̴�\n");
	else
		printf("�Ҽ��� �ƴϴ�\n");
}