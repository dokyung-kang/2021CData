#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num;
	int sum = 0;

	scanf("%d", &num);

	for (i = 1; sum < num; i++)
		sum += i;	

	printf("%d", sum);
}

/*
1. �������! ���� �׸�~
num�� �Է¹ް� 1���� �� ������ ���ų� Ŀ�������� ���س�����.
���� �Էµ� �������� ũ�ų� �������� ��� �׶������� �մ� ����Ѵ�.
ex. 57
	 66
*/