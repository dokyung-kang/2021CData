#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void f1(int a[4][4]);
void f2(int a[4][4]);
void f3(int a1[4][4], int a2[4][4]);
void f4(int a1[4][4], int a2[4][4]);
int main(void)
{
	int i;

	int arr1[4][4];
	int arr2[4][4];

		f1(arr1);
	for (i = 0; i < 4; i++) {
		f2(arr1);
		f3(arr1, arr2);
		f4(arr1, arr2);
	}
}

void f1(int a[4][4])
{
	int i, j;

	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			a[i][j] = i * 4 + j + 1;
}

void f2(int a[4][4])
{
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
	printf("\n");
}

void f3(int a1[4][4], int a2[4][4])
{
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			a2[j][3 - i] = a1[i][j];
		}
	}
}

void f4(int a1[4][4], int a2[4][4])
{
	int i, j;
	for(i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			a1[i][j] = a2[i][j];
}