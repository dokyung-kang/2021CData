#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h>
int askReservation();
void printSeats(int s[], int size);
void processReservation(int s[], int size, int
	seatNumber);
int main(void) // �������� ����
{
	int seatChoice = 0;
	int seats[SIZE] = { 0 };
	printf("******�¼� ���� �ý���******\n");
	while (seatChoice < 10)
	{
		printSeats(seats, SIZE);
		seatChoice += askReservation();
		processReservation(seats, SIZE, seatChoice);
		while (getchar() != '\n'); // ���� ���
	}
}
int askReservation()
{
	int n;

	printf("�¼��� �����Ͻðڽ��ϱ�?(���) ");
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
		printf(">>>%d���� ���� �ȵ�\n", seatNumber - 10);
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