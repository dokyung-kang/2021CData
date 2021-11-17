#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printArray(int a[]);
int main(void)
{
	int arr[5] = { 10, 20, 30, 40, 50 };
	int i;

//±âº»
/*
	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");
*/
	
	printArray(arr);
}
void printArray(int a[])
{
	int i;
	for (i = 0; i < 5; i++)
		printf("%d ", a[i]);
	printf("\n");
	return;
}