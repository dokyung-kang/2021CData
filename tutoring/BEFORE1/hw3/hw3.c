#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, n1, n2, n3;

	printf("���ڸ� ������ �Է��ϼ���: ");
	scanf("%d", &num);

	n1 = num / 100;
	n2 = num % 100 / 10;
	n3 = num % 100 % 10;

	printf("%d\n", n3);
	printf("%d\n", n2);
	printf("%d\n", n1);
}

/*
4. ���ڸ� ������ �Է¹ް�, ���� �ڸ����� ���� �� ���� ���� ����Ѵ�.
ex. ���ڸ� ������ �Է��ϼ���: 356
	 6
	 5
	 3
*/