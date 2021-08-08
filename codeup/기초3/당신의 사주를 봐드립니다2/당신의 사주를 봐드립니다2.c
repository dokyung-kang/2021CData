#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int y, m, d;
	int result;

	scanf("%d %d %d", &y, &m, &d);

	result = y + m + d;
	result %= 1000;
	result /= 100;
	if (result % 2 == 0)
		printf("대박");
	else
		printf("그럭저럭");
}