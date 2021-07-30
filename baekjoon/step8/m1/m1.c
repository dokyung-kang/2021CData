#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int A, B, C;
	int total;

	scanf("%d %d %d", &A, &B, &C);
		
	total = A / (C - B) + 1;

	if (C <= B) //���ͺб����� ������ �ʴ� ���� C(��Ʈ�� ����)�� ���� B(�������)���� �۰ų� ���� ���
		printf("-1\n");
	else
		printf("%d\n", total);
}

/*
��Ʈ�� ������ C�������� å���Ǿ��ٰ� �Ѵ�. 
�Ϲ������� ���� ����� �÷� ���� ���� ��� ���� 
�� ����(�Ǹź��)�� �� ���(=�������A+�������B)����
�������� �ȴ�. 
���ʷ� �� ������ �� ��뺸�� ������ 
������ �߻��ϴ� ������ 
���ͺб���(BREAK-EVEN POINT)�̶�� �Ѵ�.
A + B*x < C*x
A < C*x - B*x
A < (C - B)*x
A/(C - B) < x
*/