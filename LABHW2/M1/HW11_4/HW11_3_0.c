#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, i;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for (i = 2; i < n; i++)
		if (n % i == 0)
		{
			printf("�Ҽ��� �ƴմϴ�.");
			break;
		}
	if (n == i)
		printf("�Ҽ��Դϴ�.");
}