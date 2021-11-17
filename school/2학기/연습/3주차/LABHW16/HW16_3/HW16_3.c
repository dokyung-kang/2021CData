#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int arr[5][4] = { {10, 15, 20, 0}, {30, 35, 20, 0}, {60, 65, 20, 0}, {90, 95, 20, 0}, {0, 0, 0, 0} };
	int i, j;
	
	printf("a>\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++)
			printf("%4d", arr[i][j]);
		printf("\n");
	}

	printf("b>\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++) {
			if (j != 3 && i != 4) {
				arr[i][3] += arr[i][j];
				arr[4][j] += arr[i][j];
			}
		}
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++)
			printf("%4d", arr[i][j]);
		printf("\n");
	}
}