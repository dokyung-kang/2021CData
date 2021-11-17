#define _CRT_SECURE_NO_WARNINGS
#define SIZE 3
#include <stdio.h>
char askReservation();
void printSeats(int s[][10], int size);
void processReservation(int s[][10], int size, int r, int c);
int main(void) // �������� ����
{
	int row, col;
	int seats[SIZE][10] = { 0 };
	printf("******�¼� ���� �ý���******\n");
	while (askReservation() == 'y')
	{
		printSeats(seats, SIZE);
		printf("���° �¼��� �����Ͻðڽ��ϱ�? <�� ��>�� ���·� �Է�:  ");
		scanf("%d %d", &row, &col);
		processReservation(seats, SIZE, row, col);
		while (getchar() != '\n'); // ���� ���
	}
}
char askReservation()
{
	char c;

	printf("�¼��� �����Ͻðڽ��ϱ�?(y/n) ");
	scanf("%c", &c);

	return c;
}
void processReservation(int s[][10], int size, int r, int c)
{
	int i;
	if (s[r - 1][c - 1] == 0) {
		s[r - 1][c - 1] = 1;
		printf("����Ǿ����ϴ�.\n");
		printSeats(s, size);
	}
	else
		printf("�̹� ����� �ڸ��Դϴ�.\n");
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