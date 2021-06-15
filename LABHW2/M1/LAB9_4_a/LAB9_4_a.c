#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n;
	int total = 0;

	i = 1;
	while (i <= 5)
	{
		do
		{
			printf("0보다 큰 수를 입력하세요(%d번째): ", i);
			scanf("%d", &n);
		} while (n <= 0);
		total += n;
		i++;
	}
	printf("입력된 값의 총 합: %d", total);

	return 0;
}