#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int incomes[12] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66 };
	int i, n;

	printf("Ž���� ������? ");
	scanf("%d", &n);

	for (i = 0; i < 12; i++)
		if (n == incomes[i])
			break;
	if (i == 12)
		printf("���� %d�� ���� ���� �����ϴ�.", n);
	else
		printf("���� %d�� ���� ù��° ���� %d�Դϴ�.", n, i + 1);

}