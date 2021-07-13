#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int dNum(int n);
int main(void)
{
	int num[10001];
	int i, j, n;
	for (i = 1; i < 10001; i++)
		num[i] = i;
	for (i = 1; i < 10001; i++)
	{
		n = dNum(i);
		if (n < 10001)
			num[n] = -1;
	}
	for (i = 1; i < 10001; i++)
		if (num[i] != -1)
			printf("%d\n", num[i]);
}
int dNum(int n)
{
	int total;
	total = n;
	while (n != 0)
	{
		total += n % 10;
		n /= 10;
	}
	return total;
}