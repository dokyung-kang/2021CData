#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int n1, n2, total, ans;
	char op;
	char ch;
	srand(time(NULL));
	do
	{
		n1 = rand() % 100;
		n2 = rand() % 100;
		op = rand() % 4;
		switch (op)
		{
			case 0:
				op = '+';
				total = n1 + n2;
				break;
			case 1:
				op = '-';
				total = n1 - n2;
				break;
			case 2:
				op = '*';
				total = n1 * n2;
				break;
			case 3:
				op = '/';
				total = n1 / n2;
				break;
		}
		printf("%d %c %d = ", n1, op, n2);
		scanf("%d", &ans);
		while (getchar() != '\n');
		if (total == ans)
			printf("Your answer is right.\n");
		else
		{
			printf("Your answer is wrong.\n");
			printf("%d is the right answer\n", total);
		}
		printf("Do you want to play again?(y/n)");
		scanf("%c", &ch);
	} while (ch == 'y');

	return 0;
}