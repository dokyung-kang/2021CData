#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, k, n;

	scanf("%d", &n);

	for (i = n; i >= 1; i--)
	{
		for (k = 1; k < i; k++)
			printf(" ");
		for (j = 1; j <= n; j++)
			printf("*");
		printf("\n");
	}
}

/*
����纯�� ��� : ����纯�� ���� n �Է�
�غ��� ���̰� ���� ����纯������ ����Ѵ�
ex. 4
   ****
  ****
 ****
****
*/