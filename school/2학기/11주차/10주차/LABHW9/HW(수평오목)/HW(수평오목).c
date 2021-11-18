#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BOARD_SIZE 6 // ���Ŀ� 10���� �ٲپ �����Ѵ�
void display(char b[][BOARD_SIZE])
{
	char ch;
	int i, j;
	printf("     ");
	for (i = 0; i < BOARD_SIZE; i++)
		printf("%2d", i);
	printf("\n ---------------------\n");
	for (i = 0; i < BOARD_SIZE; i++) {
		printf("%3d |", i);
		for (j = 0; j < BOARD_SIZE; j++)
			printf(" %c", b[i][j]);
		printf("\n");
	}
}

int winCheck(char b[][BOARD_SIZE], int r, int c)
{
	int i = c - 1, j = c + 1;
	int cnt = 1;
	char turn;
	turn = b[r][c];

	//��
	while ((i >= 0) && (b[r][i] == turn)) {
			cnt++;
			i--;
	}
	//��
	while ((j < BOARD_SIZE) && (b[r][j] == turn)) {
			cnt++;
			j++;
	}
	if (cnt == 5) 
		return 1;
	return 0;
}

void main()
{
	char board[BOARD_SIZE][BOARD_SIZE];
	char turn = 'X';
	int r, c;
	int i, j;
	int count;
	int lose;
	int win;

	for (i = 0; i < BOARD_SIZE; i++)
		for (j = 0; j < BOARD_SIZE; j++)
			board[i][j] = ' ';

	count = 1;
	display(board);
	do
	{
		printf("Player %c(�� ��): ", turn);
		scanf("%d %d", &r, &c);

		if (board[r][c] != ' ')
			continue;

		board[r][c] = turn;
		display(board);

		if (win = winCheck(board, r, c)) 
			printf("Player %c wins!\n", turn);

		turn = (turn == 'X' ? 'O' : 'X');
		count++;
	} while (!win && count <= BOARD_SIZE * BOARD_SIZE);

	if (!win && count == BOARD_SIZE * BOARD_SIZE)
		printf("Nobody wins!\n");
}