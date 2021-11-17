#define _CRT_SECURE_NO_WARNINGS
#define SIZE 3
#include <stdio.h>
char askReservation();
void printSeats(int s[][10], int size);
void processReservation(int s[][10], int size, int r, int c);
int main(void) // 변경하지 마라
{
	int row, col;
	int seats[SIZE][10] = { 0 };
	printf("******좌석 예약 시스템******\n");
	while (askReservation() == 'y')
	{
		printSeats(seats, SIZE);
		printf("몇번째 좌석을 예약하시겠습니까? <열 행>의 형태로 입력:  ");
		scanf("%d %d", &row, &col);
		processReservation(seats, SIZE, row, col);
		while (getchar() != '\n'); // 버퍼 비움
	}
}
char askReservation()
{
	char c;

	printf("좌석을 예약하시겠습니까?(y/n) ");
	scanf("%c", &c);

	return c;
}
void processReservation(int s[][10], int size, int r, int c)
{
	int i;
	if (s[r - 1][c - 1] == 0) {
		s[r - 1][c - 1] = 1;
		printf("에약되었습니다.\n");
		printSeats(s, size);
	}
	else
		printf("이미 예약된 자리입니다.\n");
}
void printSeats(int s[][10], int size)
{
	int i, j;

	printf("----------------------------------------\n");
	printf("\t  1  2  3  4  5  6  7  8  9  10\n");
	printf("----------------------------------------\n");
	for (i = 0; i < SIZE; i++) {
		printf("%d\t", i + 1);
		for (j = 0; j < 10; j++)
			printf("%3d", s[i][j]);
		printf("\n");
	}
	printf("\n");
}