#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n[4];
	int i, sum1 = 0, sum2 = 0;
	int ms, max1 = 0, min1 = 0;
	int max = -999;
	int min = 999;
	int prime;
	for (i = 0; i <= 3; i++)
		scanf("%d", &n[i]);
	for (i = 0; i <= 3; i++)
	{
		if (n[i] > max) //�ִ� ���ϱ�
			max = n[i];
		if (n[i] < min) //�ּڰ� ���ϱ�
			min = n[i];
	}
	sum1 += max;
	sum1 += min; //�ִ� �ּڰ��� ���� sum1�� ����
	for (i = 0; i <= 3; i++)
	{
		if (n[i] == max && max1 == 0) //���� �ִ��� �տ� �ȳ������� ���� �������� max1 ������ 1�� �ٲ�
			max1 = 1;
		else if (n[i] == min && min1 == 0) //�ּڰ��� �ִ��̶� �Ȱ��� ����
			min1 = 1;
		else //�տ� �ִ�, �ּڰ��� �� �� ���԰ų� �ִ�, �ּڰ��� �ƴ� ��� n2 �迭�� ������� �ְ� ���� sum2��
			sum2 += n[i];
	}
	max1 = 0; //max1, min1 ���� �� ���Ŷ� �ٽ� 0���� �ʱ�ȭ
	min1 = 0;
	if (sum1 > sum2) 
	{
		prime = 1;
		ms = sum1 - sum2;
	}
	else
	{
		prime = 2;
		ms = sum2 - sum1;
	}
	if (prime == 1)//sum1�� �� Ŭ���
	{
		for (i = 0; i <= 3; i++) 
		{
			if (n[i] == max && max1 == 0) //�ִ��̰� �տ� �ִ��� ������ ������ ���ϰ� ���� �ִ� �������� max1�� 1������ �ٲ�
			{
				n[i] += ms;
				max1 = 1;
			}
			else if (n[i] == min && min1 == 0) //�ּڰ��� �Ȱ��� ����
			{
				n[i] += ms;
				min1 = 1;
			}
			else //�������� �̹� �տ� �ִ��̳� �ּڰ��� ���԰ų� �ִ��ּҰ��� �ƴҰ��
				n[i] -= ms;
		}
	}
	else //���̶� �Ȱ����� �� ���� ���� ���ϰ� ���°� �ݴ�
		for (i = 0; i <= 3; i++)
		{
			if (n[i] == max && max1 == 0)
			{
				n[i] -= ms;
				max1 = 1;
			}
			else if (n[i] == min && min1 == 0)
			{
				n[i] -= ms;
				min1 = 1;
			}
			else
				n[i] += ms;
		}
	for (i = 0; i <= 3; i++) //���������� �迭 ���
		printf("%d ", n[i]);
}