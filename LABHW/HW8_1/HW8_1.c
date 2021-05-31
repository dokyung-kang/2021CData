#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num, answer, result;
	int count = 0;

	printf("몇 단을 연습하시겠습니까?: ");
	scanf("%d", &num);

	for (i = 1; i <= 9; i++)
	{
		answer = num * i;
		printf("%d * %d = ", num, i);
		scanf("%d", &result);

		if (answer == result)
			count++;
	}
	printf("%d 단의 구구단에서 %d개를 맞았습니다\n", num, count);
}