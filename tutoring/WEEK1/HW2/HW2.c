#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, a, d, n;

	scanf("%d %d %d", &a, &d, &n);

	for (i = 1; i < n; i++)
		a += d;
	printf("%d\n", a);

}

/*
2. �������� : ���� ��(a), ����(d), �� ��° ��(n) �� ������ �Է¹ް�
�� ���������� n��° ���� ����Ѵ�.
ex. 1 3 5
	13
*/