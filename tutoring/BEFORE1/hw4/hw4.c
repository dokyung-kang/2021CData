#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n1, n2, n3;

	printf("�� ������ �Է��ϼ���: ");
	scanf("%d %d %d", &n1, &n2, &n3);

	if (n1 < n2)
	{
		if (n1 < n3)
		{
			if (n2 < n3)
				printf("%d %d %d\n", n1, n2, n3);
			else
				printf("%d %d %d\n", n1, n3, n2);
		}
		else
			printf("%d %d %d\n", n3, n1, n2);
	}
	else
	{
		if (n2 < n3)
		{
			if (n1 < n3)
				printf("%d %d %d\n", n2, n1, n3);
			else
				printf("%d %d %d\n", n2, n3, n1);
		}
		else
			printf("%d %d %d\n", n3, n2, n1);
	}
	return 0;
}

/*
3. ���� 3���� �Է¹ް�, ���� ���� ���� ����Ѵ�.
ex. �� ������ �Է��ϼ���: 4 7 2
	 2 4 7
*/