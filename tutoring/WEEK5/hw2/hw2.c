#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int f(int num);
int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d\n", f(n));
}
int f(int num)
{
	int count = 0;
	for (int i = 1; i <= num; i++)
		if (num % i == 0)
			count++;
	return count;
}