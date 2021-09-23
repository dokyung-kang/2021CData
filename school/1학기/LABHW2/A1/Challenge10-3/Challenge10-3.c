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
	int past, present, future, i;
	past = present = 1;
	if (n == 0)
		printf("%d ", past);
	else if (n == 1)
		printf("%d ", present);
	else
	{
		for (i = 1; i < n; i++)
		{
			future = past = present;
			past = present;
			present = future;
		}
		printf("%d ", future);
	}

	return;
}