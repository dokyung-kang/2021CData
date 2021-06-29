#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printFibo(int n);
int main(void)
{
	int num, i;

	printf("몇개의 피보나치 수열값을 출력할까요(3보다 큰 정수): ");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
		printFibo(i);

	printf("\n");
}
void printFibo(int n)
{
	int a = 0, b = 1, c = 1, j;
	for (j = 0; j < n; j++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	printf("%d ", c);

	return;
}