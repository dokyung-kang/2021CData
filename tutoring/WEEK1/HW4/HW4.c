#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, n;

	scanf("%d", &n);

	for (i = 1; i < 6; i++)
		for (j = 1; j < 6; j++)
			if (i + j == n)
				printf("%d %d\n", i, j);
}

/*
4. �� �ֻ����� �� : �ֻ����� ��(n) �Է�
1�� �ֻ��� �� ������������ ������ ��� ��� ���
ex. 5
	1 4
	2 3
	3 2
	4 1
*/