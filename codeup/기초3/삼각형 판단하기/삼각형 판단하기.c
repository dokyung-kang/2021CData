#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (a + b <= c)
		printf("»ï°¢Çü¾Æ´Ô");
	else
	{
		if (a == b && b == c)
			printf("Á¤»ï°¢Çü");
		else if (a * a + b * b == c * c)
			printf("Á÷°¢»ï°¢Çü");
		else if (a == b || a == c || b == c)
			printf("ÀÌµîº¯»ï°¢Çü");
		else
			printf("»ï°¢Çü");
	}
}