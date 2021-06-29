#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printFibo(int n);
int main(void)
{
	int num, i;

	printf("��� �Ǻ���ġ �������� ����ұ��(3���� ū ����): ");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
		printFibo(i);

	printf("\n");
}
void printFibo(int n)
{
	int j, next, past, current;
	next = 1;
	past = 1;
	current = 1;
	for (j = 0; j < n; j++)
	{
		next = past + current;
		past = current;
		current = next;
	}
	printf("%d ", next);

	return;
}