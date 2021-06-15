#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void generateData(int[], int);
void printData(int[], int);
int averageData(int[], int);
int maxData(int[], int);
int main(void)
{
	int data[10];
	int average, best;
	srand(time(NULL));
	generateData(data, 10);

	printf("������Ʈ���� ");
	printData(data, 10);

	average = averageData(data, 10);
	printf("������Ʈ���� ����� %d\n", average);

	best = maxData(data, 10);
	printf("���� ū��: ");
	printf("%d", best);

}
void generateData(int a0[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		a0[i] = rand() % 100;
}
void printData(int a2[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", a2[i]);
	printf("\n");
	return;
}
int averageData(int a1[], int size)
{
	int i, avg, total = 0;
	for (i = 0; i < size; i++)
		total += a1[i];
	avg = total / size;
	return avg;
}
int maxData(int a3[], int size)
{
	int i, best = a3[0];
	for (i = 0; i < size; i++)
		if (best < a3[i])
			best = a3[i];
	return best;
}
