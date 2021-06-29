#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, square, cube;
	
	num = 7;
	square = num * num;
	cube = num * num * num;

	printf("The square number of %d is %d\n", num, square);
	printf("The cube number of %d is %d\n", num, cube);
}