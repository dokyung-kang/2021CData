#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printStar(int i, int j, int n);
int main(void)
{
	int num;
	int i, j;

	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
			printStar(i, j, num);
		printf("\n");
	}
}
void printStar(int i, int j, int n)
{
	if ((i / n) % 3 == 1 && (j / n) % 3 == 1) //(1,1), (1,4), (1,10),...
		printf(" ");
	else
	{
		if (n / 3 == 0)
			printf("*");
		else
			printStar(i, j, n / 3); // ù��° if�� n�� i�� j���� ũ�� ������ ������ 0���ͼ�
	}
}