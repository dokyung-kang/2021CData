#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include <stdio.h>
void printArray(int a[], int size);
int equalArray(int a[], int b[], int size);
int main(void)
{
	int i;
	int arrayA[SIZE] = { 1, 2, 3, 4, 5 };
	int arrayB[SIZE];
	int arrayC[SIZE];

	for (i = 0; i < SIZE; i++)
	{
		arrayB[i] = arrayA[i];
		arrayC[5 - i - 1] = arrayB[i];
	}
	printArray(arrayA, SIZE);
	printArray(arrayB, SIZE);
	printArray(arrayC, SIZE);

	if (equalArray(arrayA, arrayB, SIZE))
		printf("같다\n");
	else
		printf("다르다\n");
	if (equalArray(arrayA, arrayC, SIZE))
		printf("같다\n");
	else
		printf("다르다\n");
}
void printArray(int a[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", a[i]);
	printf("\n");
	return;
}
equalArray(int a[], int b[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		if (a[i] != b[i])
			return 0;
	return 1;
}