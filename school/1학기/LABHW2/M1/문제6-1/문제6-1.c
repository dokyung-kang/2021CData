#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, subNum, subNumTemp, posNum;
	int i, dividend;

	scanf("%d", &num);
	scanf("%d", &subNum);

	subNumTemp = subNum;
	posNum = 0;

	while (subNumTemp != 0)
	{
		posNum++;
		subNumTemp /= 10;
	}
	dividend = 1;
	for (i = 0; i < posNum; i++)
		dividend *= 10;
	while (num != 0)
	{
		if (num % dividend == subNum)
			break;
		num /= 10;
	}
	printf("%d\n", num);
}
