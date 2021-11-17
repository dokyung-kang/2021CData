#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h>
int askReservation();
void printSeats(int s[], int size);
void processReservation(int s[], int size, int
	seatNumber);
int main(void) // 변경하지 마라
{
	int seatChoice = 0;
	int seats[SIZE] = { 0 };
	printf("******좌석 예약 시스템******\n");
	while (seatChoice < 10)
	{
		printSeats(seats, SIZE);
		seatChoice += askReservation();
		processReservation(seats, SIZE, seatChoice);
		while (getchar() != '\n'); // 버퍼 비움
	}
}
int askReservation()
{
	int n;

	printf("좌석을 예약하시겠습니까?(몇명) ");
	scanf("%d", &n);

	return n;
}
void processReservation(int s[], int size, int seatNumber)
{
	int i;
	if (seatNumber <= 10) {
		for (i = 0; i < seatNumber; i++)
			s[i] = 1;
		printSeats(s, size);
	}
	else {
		printf(">>>%d명은 예약 안됨\n", seatNumber - 10);
		for (i = 0; i < 10; i++)
			s[i] = 1;
		printSeats(s, size);
	}
}
void printSeats(int s[], int size)
{
	int i;

	printf("----------------------\n");
	printf(" 1 2 3 4 5 6 7 8 9 10\n");
	printf("----------------------\n");
	for (i = 0; i < SIZE; i++)
		printf("%2d", s[i]);
	printf("\n");
}