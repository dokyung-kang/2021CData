#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int base, height, width, circumference, area;

	printf("�غ��� ���̸� �Է��ϼ���: ");
	scanf("%d %d", &base, &height);

	area = (base * height) / 2;

	printf("�غ��� ���̰� ���� %d�� %d�� �ﰢ���� ���̴� %d�̴�\n", base, height, area);

	printf("���簢���� ���ο� ���̸� �Է��ϼ���: ");
	scanf("%d %d", &width, &height);

	circumference = (width + height) * 2;
	area = width * height;

	printf("���ο� ���̰� ���� %d�� %d�� ���簢���� �ѷ��� ���̴� %d�� %d�̴�\n", width, height, circumference, area);
}