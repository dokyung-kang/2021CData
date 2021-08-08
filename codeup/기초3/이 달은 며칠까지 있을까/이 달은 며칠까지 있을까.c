#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int y, m;
	int flag;

	scanf("%d %d", &y, &m);

	if (y % 400 == 0)
		flag = 1;
	else if (y % 4 == 0)
	{
		if (y % 100 == 0)
			flag = 0;
		else
			flag = 1;
	}
	else
		flag = 0;
	
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		printf("31");
	else if (m == 2)
	{
		if (flag == 1)
			printf("29");
		else
			printf("28");
	}
	else
		printf("30");
}