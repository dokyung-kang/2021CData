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
	int cnt = 1;
	char turn;
	turn = b[r][c];

	//왼
	for (i = c - 1; i >= 0; i--) {
		if (b[r][i] == turn)
			cnt++;
		else
			break;
	}
	//오
	for (i = c + 1; i < BOARD_SIZE; i++) {
		if (b[r][i] == turn)
			cnt++;
		else 
			break;
	}
	if (cnt == 5) {
		printf("Player %c wins!\n", turn);
		return 1;
	}
	else
		return 0;
}

void main()
{
	char board[BOARD_SIZE][BOARD_SIZE];
	char turnX = 'X';
	char turnO = 'O';
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
		if (count % 2 == 1) {
			printf("Player %c(행 열):", turnX);
			scanf("%d %d", &r, &c);
			if (board[r][c] != ' ')
				continue;
			else
				board[r][c] = turnX;
		}
		else {
			printf("Player %c(행 열):", turnO);
			scanf("%d %d", &r, &c);
			if (board[r][c] != ' ')
				continue;
			else
				board[r][c] = turnO;
		}
		display(board);
		if (winCheck(board, r, c)) {
			have = 1;
			break;
		}
		count++;
	} while (count <= BOARD_SIZE * BOARD_SIZE);

	if (!have)
		printf("Nobody wins!\n");
}