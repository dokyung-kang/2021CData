#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (a + b <= c)
		printf("�ﰢ���ƴ�");
	else
	{
		if (a == b && b == c)
			printf("���ﰢ��");
		else if (a * a + b * b == c * c)
			printf("�����ﰢ��");
		else if (a == b || a == c || b == c)
			printf("�̵�ﰢ��");
		else
			printf("�ﰢ��");
	}
}