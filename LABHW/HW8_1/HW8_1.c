#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num, answer, result;
	int count = 0;

	printf("�� ���� �����Ͻðڽ��ϱ�?: ");
	scanf("%d", &num);

	for (i = 1; i <= 9; i++)
	{
		answer = num * i;
		printf("%d * %d = ", num, i);
		scanf("%d", &result);

		if (answer == result)
			count++;
	}
	printf("%d ���� �����ܿ��� %d���� �¾ҽ��ϴ�\n", num, count);
}