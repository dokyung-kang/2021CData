#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j;
	int total = 0;
	double avg;
	int max;

	printf("배열 test의 엘리먼트를 출력합니다\n");
	for (i = 0; i < 4; i++) {
		printf("%d번째 row: ", i + 1);
		for (j = 0; j < 3; j++)
			printf("%5d", test[i][j]);
		printf("\n");
	}

	printf("\n다>\n");
	printf("배열 test의 엘리먼트를 출력합니다\n");
	for (i = 0; i < 4; i++)
		test [i][2] = -1;
	for (i = 0; i < 4; i++) {
		printf("%d번째 row: ", i + 1);
		for (j = 0; j < 3; j++)
			printf("%5d", test[i][j]);
		printf("\n");
	}

	printf("\n라>\n");
	for (i = 0; i < 4; i++) 
		for (j = 0; j < 3; j++) 
			total += test[i][j];
	avg = (double)total / 12;
	printf("Total is %d\n", total);
	printf("Average is %.2f\n", avg);

	total = 0;
	printf("마>\n");
	for (i = 0; i < 4; i++) {
		max = test[i][0];
		for (j = 0; j < 3; j++) {
			if (max < test[i][j])
				max = test[i][j];
		}
		total += max;
		printf("%d번째 row에서의 최대값: %d\n", i, max);
	}
	printf("최대값의 합: %d", total);
}