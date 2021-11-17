#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void selectSort(int list[], int size)
{
	int i, j;
	int maxI;
	int temp;
	for (i = 0; i < size - 1; i++) {
		maxI = i;
		for (j = i + 1; j < size; j++) {
			if (list[j] < list[maxI])
				maxI = j;
		}
		temp = list[i];
		list[i] = list[maxI];
		list[maxI] = temp;
	}
	for (i = 0; i < 10; i++)
		printf("%3d", list[i]);
	printf("\n");
}
int main(void)
{
	int i;
	int list[10];

	srand(time(NULL));
	printf("�߻��� ����: \t");
	for (i = 0; i < 10; i++) {
		list[i] = rand() % 100;
		printf("%3d", list[i]);
	}
	printf("\n");
	printf("������: \t");
	selectSort(list, 10);
}