#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void matrixAdd(int a[][3], int b[][3], int c[][3], int size)
{
	int i, j;

	for (i = 0; i < size; i++)
		for (j = 0; j < 3; j++)
			c[i][j] = a[i][j] + b[i][j];
}

void printMatrix(int a[][3], int size)
{
	int i, j;

	for (i = 0; i < size; i++) {
		for (j = 0; j < 3; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
}

void readMatrix(int a[][3], int size)
{
	int i, j;

	for (i = 0; i < size; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
}

void readMatrix2(int a[][2], int size)
{
	int i, j;

	for (i = 0; i < size; i++)
		for (j = 0; j < 2; j++)
			scanf("%d", &a[i][j]);
}

int main(void)
{
	int X[4][2], Y[2][3], Z[4][3] = { 0 };
	int i, j, k;

	printf("(4 x 2) 행렬 A 입력:\n");
	readMatrix2(X, 4);
	printf("(2 x 3) 행렬 B 입력:\n");
	readMatrix(Y, 2);

	for (i = 0; i < 4; i++) 
		for (j = 0; j < 3; j++) 
			for (k = 0; k < 2; k++) 
				Z[i][j] += X[i][k] * Y[k][j];

	printf("행렬합:\n"); printMatrix(Z, 4);
	printf("\n");

}