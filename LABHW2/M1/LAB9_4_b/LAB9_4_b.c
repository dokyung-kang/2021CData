#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n;
	int total = 0;

	i = 1;
	while (i <= 5)
	{
		printf("0���� ū ���� �Է��ϼ���(%d��°): ", i);
		scanf("%d", &n);
		while (n <= 0)
		{
			printf("0���� ū ���� �Է��ϼ���(%d��°): ", i);
			scanf("%d", &n);
		}
		total += n;
		i++;
	}
	printf("�Էµ� ���� �� ��: %d", total);

	return 0;
}