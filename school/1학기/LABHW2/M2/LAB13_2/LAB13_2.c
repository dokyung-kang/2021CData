#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int incomes[12] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66 };
	int i, n;

	printf("탐색할 수입은? ");
	scanf("%d", &n);

	for (i = 0; i < 12; i++)
		if (n == incomes[i])
			break;
	if (i == 12)
		printf("수입 %d를 갖는 달은 없습니다.", n);
	else
		printf("수입 %d를 갖는 첫번째 달은 %d입니다.", n, i + 1);

}