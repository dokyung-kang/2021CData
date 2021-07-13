#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n[4];
	int n1[2];
	int n2[2];
	int i, j = 0, sum1 = 0, sum2 = 0;
	int ms, max1 = 0, min1 = 0;
	int max = -99;
	int min = 99;
	int prime;
	for (i = 0; i <= 3; i++)
		scanf("%d", &n[i]);
	for (i = 0; i <= 3; i++)
	{
		if (n[i] > max)
		{
			max = n[i];
			n1[0] = n[i];
		}
		if (n[i] < min)
		{
			min = n[i];
			n1[1] = n[i];
		}
	}
	sum1 += max;
	sum1 += min;
	for (i = 0; i <= 3; i++)
	{
		if (n[i] == max && max1 == 0)
			max1 = 1;
		else if (n[i] == min && min1 == 0)
			min1 = 1;
		else 
		{
			sum2 += n[i];
			n2[j++] = n[i];
		}
	}
	max1 = 0;
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
	if (prime == 1)
	{
		for (i = 0; i <= 3; i++)
		{
			if (n[i] == max && max1 == 0)
			{
				n[i] += ms;
				max1 = 1;
			}
			else if (n[i] == min && min1 == 0)
			{
				n[i] += ms;
				min1 = 1;
			}
			else
				n[i] -= ms;
		}
	}
	else
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
	for (i = 0; i <= 3; i++)
		printf("%d ", n[i]);
}