#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n1, n2;

	scanf("%d %d", &n1, &n2);

	for (i = 0; i <= n1; i++)
		if (i % n2 != 0)
			printf("%d ", i);
	return 0;
}


/*
1. n�� ��� ��� : �ݺ� ����(limit), ������ ��(n) �� ������ �Է¹ް�
1���� �ݺ����������� �� �� ������ ���� ����� ������ ��� ���� ����Ѵ�.
ex. 10 3
	 1 2 4 5 7 8 10
*/