#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, cnt = 0, i, j;
	int x = 0, y = -1, f = 1, n;
	int a[50][50] = { 0, };
	/*
	num:�Է°�,  cnt: ���԰�, 
	x, y: �����ġ, f: ������ȣ, n: �ݺ�Ƚ��
	*/
	scanf("%d", &num);

	n = num;

	while (n > 0)
	{
		//������
		for (i = 0; i < n; i++)
		{
			y += f;
			a[x][y] = ++cnt;
		}
		n--;
		//�� ���� ä��� n ����
		//������
		for (i = 0; i < n; i++)
		{
			x += f;
			a[x][y] = ++cnt;
		}
		f *= -1; //�� for�� �����ϸ鼭 �� ���������� ���� �����ϸ鼭 ����
	}
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	
}