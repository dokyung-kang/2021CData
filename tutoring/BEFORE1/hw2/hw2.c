#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num1, num2, num3, odd = 0, even = 0;
	printf("�� ������ �Է��ϼ���: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	if (num1 % 2 == 0)
		even += num1;
	else
		odd += num1;
	if (num2 % 2 == 0)
		even += num2;
	else
		odd += num2;
	if (num3 % 2 == 0)
		even += num3;
	else
		odd += num3;

	printf("¦���� ��: %d Ȧ���� ��: %d\n", even, odd);
}


/*
2. ���� 3���� �Է¹ް�, ������ ���ڵ��� ¦������/Ȧ������ �Ǻ���
¦�������� �հ� Ȧ�������� ���� ���� ����Ѵ�.
ex. �� ������ �Է��ϼ���: 2 4 7
	 ¦���� �� : 6, Ȧ���� �� : 7
���� �������!
�� �� ģ���� ä������ �˷��ּ���~!
Ȧ�� : odd, ¦�� : even
*/