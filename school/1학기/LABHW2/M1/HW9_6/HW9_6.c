#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int money, b, c1, c2;
	int i, j, k;

	printf("Enter ±Ý¾×: ");
	scanf("%d", &money);

	for (b = 1; 500 * b <= money; b++)
		for (c1 = 1; 700 * c1 <= money; c1++)
			for (c2 = 1; 400 * c2 <= money; c2++)
				if (b * 500 + c1 * 700 + c2 * 400 == money)
					printf("»§: %d ÄíÅ°: %d ÄÝ¶ó: %d\n", b, c1, c2);
}