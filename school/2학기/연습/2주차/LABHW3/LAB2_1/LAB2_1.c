#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print_add(int a, int b);
int main(void)
{
	int x = 0;
	int y = 1;
	print_add(x, y);

	x = 10;
	y = 11;
	print_add(x, y);

}

void print_add(int a, int b)
{
	printf("%d�� %d�� ���� %d�Դϴ�, \n", a, b, a + b);
	printf("�ռ��� ����Ǿ����ϴ�.\n");
}