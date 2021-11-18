#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BOARD_SIZE 6 // 추후에 10으로 바꾸어서 진행한다
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
	int i, j;
	int sum;
	char turn;
	turn = b[r][c];

	for (i = 0; i < BOARD_SIZE; i++) {
		sum = 0;
		for (j = 0; j < BOARD_SIZE; j++)
			if (b[i][j] == turn)
				sum++;
		if (sum == 5) {
			printf("Player %c wins!\n", turn);
			return 1;
		}
	}

	for (j = 0; j < BOARD_SIZE; j++) {
		sum = 0;
		for (i = 0; i < BOARD_SIZE; i++)
			if (b[i][j] == turn)
				sum++;
		if (sum == 5) {
			printf("Player %c wins!\n", turn);
			return 1;
		}
	}

	sum = 0;
	for (i = 0; i < BOARD_SIZE; i++)
		if (b[i][i] == turn)
			sum++;
	if (sum == 5) {
		printf("Player %c wins!\n", turn);
		return 1;
	}

	sum = 0;
	for (i = 0; i < BOARD_SIZE; i++)
		if (b[i][BOARD_SIZE - 1 - i] == turn)
			sum++;
	if (sum == 5) {
		printf("Player %c wins!\n", turn);
		return 1;
	}

	return 0;
}

void main()
{
	char board[BOARD_SIZE][BOARD_SIZE];
	char turn = 'X';
	int r, c;
	int i, j;
	int count;
	int have = 0;
	for (i = 0; i < BOARD_SIZE; i++)
		for (j = 0; j < BOARD_SIZE; j++)
			board[i][j] = ' ';
	count = 1;
	display(board);
	do
	{
		printf("Player %c(행 열): ", turn);
		scanf("%d %d", &r, &c);

		if (board[r][c] != ' ')
			continue;
		board[r][c] == turn;
		display(board);
		turn = (turn == 'X' ? 'O' : 'X');
		if (winCheck(board, r, c)) {
			have = 1;
			break;
		}
		count++;
	} while (count <= BOARD_SIZE * BOARD_SIZE);

	if (!have)
		printf("Nobody wins!\n");
}