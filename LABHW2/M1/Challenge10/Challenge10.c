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
	int n1, n2, n3;
	int i;
	n1 = 1;
	n2 = 1;
	n3 = 0;
	if (n < 2)
		printf("1 ");
	else
	{
		for (i = 1; i < n; i++)
		{
			n3 = n1 + n2;
			n1 = n2;
			n2 = n3;
		}
		printf("%d ", n3);
	}
	return;
}