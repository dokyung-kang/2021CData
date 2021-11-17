#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void initArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		arr[i] = rand() % 100;
	return;
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void printMinMax(int arr[], int size)
{
	int i;
	int max = -1, min = 999;
	int maxI = 0, minI = 0;

	for (i = 0; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
			maxI = i;
		}
		if (min > arr[i]) {
			min = arr[i];
			minI = i;
		}
	}
	printf("최대값: 인덱스 = %d, 값 = %d\n", maxI, max);
	printf("최소값: 인덱스 = %d, 값 = %d\n", minI, min);
}

int main(void)
{
	int a[10];
	srand(time(NULL));
	initArray(a, 10);
	printArray(a, 10);
	printMinMax(a, 10);

	return 0;
}